#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length  = s.length() - 1;
        while (length >= 0 && !isalpha(s[length]))
            length--;
        int lastletter = length;
        while (length >= 0 && isalpha(s[length]))
            length--;
        return lastletter - length;
   }        
};

int main()
{
    Solution s;

    cout << s.lengthOfLastWord("a fff   ") << endl;
}