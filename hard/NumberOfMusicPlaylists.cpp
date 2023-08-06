#include <iostream>
#include <vector>
#include <set>
using namespace std;
        // n = different songs
        // goal = how many songs you want to listen to, not necessarily different so we can hear the same songs multiple times
        // everysong is played at least once, so we cant listen to the same song if we didnt listen to them all first !! 
        // k = A song can only be played once if k songs are played
        // return the number of possible playlists that can be created !

class Solution {
public:
    int mod = 1000000007;
    long long func(vector<vector<int> >result, int songs, int playlists, int k, int len, int diff)
    {
        if (len == playlists) {
            return (diff == songs);
        }
        if (result[len][diff] != -1) {
            return result[len][diff];
        }
        long long ans1 = (long long)func(result, songs, playlists, k, len + 1, diff) %mod* (long long int)(max(0,diff-k))%mod;
        long long ans2 = (long long)func(result, songs, playlists, k, len + 1, diff+1) %mod* (long long int)(songs-diff)%mod;
        return result[len][diff] = (ans1+ans2)%mod;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int> > result(goal + 1, vector<int>(goal + 1, -1));
        return func(result, n, goal, k, 0, 0);
    }
};

int main()
{
    Solution s;

    cout << s.numMusicPlaylists(2, 3, 1);
}
/*
This code also solves the problem of finding the number of valid music playlists with a given set of songs and specific constraints. Let's go through the code and understand how it works:

int mod = 1000000007;: The code sets a constant mod to 1000000007 (1e9 + 7). This constant is used for taking modulo throughout the code to keep the values within the range of the integer data type.

long long func(vector<vector<int> > result, int songs, int playlists, int k, int len, int diff): This function is a recursive function that calculates the number of valid music playlists. It takes six parameters:

result: A 2D vector that stores the intermediate results of subproblems. It has dimensions (playlists + 1) x (songs + 1) and is initialized with -1.
songs: The total number of songs available.
playlists: The desired number of playlists.
k: The maximum number of songs that can be skipped.
len: The current playlist's length being considered (0-based index).
diff: The number of distinct songs used in the current playlist.
if (len == playlists) { return (diff == songs); }: The base case of the recursion. If the current playlist's length len reaches the desired number of playlists, it checks if the number of distinct songs used (diff) is equal to the total number of songs (songs). If yes, it returns 1 (true), indicating a valid playlist. Otherwise, it returns 0 (false).

if (result[len][diff] != -1) { return result[len][diff]; }: Before proceeding with the recursive calls, the code checks if the result for the current state (len, diff) has already been calculated and stored in the result 2D vector. If so, it directly returns the cached result to avoid redundant computations.

long long ans1 = (long long)func(result, songs, playlists, k, len + 1, diff) %mod * (long long int)(max(0, diff - k)) %mod;: This line represents the first recursive call. It calculates the number of valid playlists if the current song is not added to the playlist. The function is called with len + 1, indicating that we move to the next playlist, and diff remains the same (i.e., we skip the current song). The factor (long long int)(max(0, diff - k)) ensures that we don't skip more songs than the maximum allowed (k). The result is added to ans1.

long long ans2 = (long long)func(result, songs, playlists, k, len + 1, diff + 1) %mod * (long long int)(songs - diff) %mod;: This line represents the second recursive call. It calculates the number of valid playlists if the current song is added to the playlist. The function is called with len + 1, indicating that we move to the next playlist, and diff + 1, indicating that the number of distinct songs used increases by one. The factor (long long int)(songs - diff) represents the number of remaining songs to choose from, as we can't repeat songs. The result is added to ans2.

return result[len][diff] = (ans1 + ans2) % mod;: After calculating the result for the current state (len, diff), it stores the result in the result 2D vector for future reference and returns it. The result is calculated modulo mod to keep the values within the range of the integer data type.

int numMusicPlaylists(int n, int goal, int k): This function is the main function that solves the problem. It takes three parameters:

n: The total number of songs.
goal: The desired length of the playlist.
k: The maximum number of songs that can be skipped.
vector<vector<int> > result(goal + 1, vector<int>(goal + 1, -1));: The result 2D vector is created with dimensions (goal + 1) x (goal + 1) and initialized with -1.

return func(result, n, goal, k, 0, 0);: The function returns the result obtained from the recursive function func with initial state (len = 0, diff = 0).

Like the previous code, this solution uses dynamic programming with memoization to efficiently compute the number of valid music playlists. By storing the results of subproblems in the result 2D vector, it avoids redundant calculations and improves the overall efficiency of the solution. The solution is optimized by using the modulo mod throughout the recursive calls to prevent integer overflow.
*/