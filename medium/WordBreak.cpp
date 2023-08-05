#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 1; i <= n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
}; // We use an unordered_set for efficient lookup (O(1) average case) to quickly check if a word exists in the wordDict.


int main()
{
    Solution s;

    vector<string>ss;
    // ss.push_back("cats");
    // ss.push_back("dog");
    // ss.push_back("sand");
    // ss.push_back("and");
    // ss.push_back("cat");
    // ss.push_back("apple");
    // ss.push_back("pen");
    // ss.push_back("hhh");
    ss.push_back("car");
    ss.push_back("ca");
    ss.push_back("rs");
    cout << s.wordBreak("cars", ss) << endl;
}
/*

Dynamic programming is a powerful algorithmic technique used to solve problems by breaking them down into smaller overlapping subproblems and solving each subproblem only once, storing its solution in a table for future reference. It is particularly useful for optimization problems, where you are looking to find the best solution among many possible solutions.

The key idea behind dynamic programming is to solve larger problems by reusing the solutions to smaller subproblems. This way, the overall time complexity of the algorithm can be significantly reduced compared to naive recursive solutions that might repeatedly solve the same subproblems.

The two main properties that a problem must possess for dynamic programming to be applicable are:

Overlapping Subproblems: The problem can be divided into smaller overlapping subproblems, and the solutions to these subproblems are reused multiple times in the process of solving the main problem.

Optimal Substructure: The optimal solution to the main problem can be constructed from the optimal solutions of its subproblems.

Dynamic programming can be implemented using either a top-down approach (memoization) or a bottom-up approach (tabulation).

Top-Down Approach (Memoization): In this approach, the main problem is divided into subproblems recursively. As each subproblem is solved, its solution is stored in a data structure (usually an array or a hash table) to avoid redundant calculations if the same subproblem is encountered again.

Bottom-Up Approach (Tabulation): In this approach, the subproblems are solved iteratively in a bottom-up manner, starting from the smallest subproblems and progressively building up the solutions to larger ones. The solutions are stored in a table, and each entry in the table is calculated based on the solutions of smaller subproblems.

Dynamic programming is commonly used to solve a wide range of problems, including:

Fibonacci series calculation
Shortest path problems (e.g., Dijkstra's algorithm)
Knapsack problem
Matrix chain multiplication
Longest common subsequence
Edit distance (Levenshtein distance)
Coin change problem
Maximum sum subarray (Kadane's algorithm)
And many more.
Dynamic programming can provide significant performance improvements over naive algorithms for problems with overlapping subproblems, making it a crucial technique in the fields of computer science, algorithms, and optimization.

*/