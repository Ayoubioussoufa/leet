#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end()); // to think about sorting then compare first and last !! 
        int n = strs.size();
        string first = strs[0];
        string last = strs[n - 1];
        for(int i = 0; i < first.size(); i++){
            if (first[i] != last[i]){
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};

int main()
{
    Solution s;

    vector<string> words;
    words.push_back("flow");
    words.push_back("dog");
    words.push_back("flower");

    cout << s.longestCommonPrefix(words) << endl;
}
/*
Runtime
-ms
Beats 100.00%of users with C++

Memory
9.13mb
Beats 61.13%of users with C++
*/