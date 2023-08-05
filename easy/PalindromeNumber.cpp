#include <iostream>
#include <vector>

using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string  str = to_string(x);
//         int j = str.length() - 1;
//         for (int i = 0; i < str.length() / 2; i++)
//         {
//             if (str[i] != str[j])
//                 return false;
//             else
//                 j--;
//         }
//         return true;
//     }
// }; // from int to string, and runtime : 12ms, beats 72% || memory : 5.9mb, beats 80%

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        else
        {
            size_t result(0); // difference between result=0 and this one is in memory, from 5.73mb to  5.9mb but the constructor waay better in runtime
            int p = x;
            while (p > 0)
            {
                result = result * 10 + p % 10;
                p /= 10;
            }
            return result==x;
        }
    }
}; // with purely int, we reverse the integer, if it stays the same so its palindrome.11ms
// Beats 81.19%of users with C++ Memory 5.92mb Beats 38.58%of users with C++


int main()
{
    Solution s;

    if (s.isPalindrome(21))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
}