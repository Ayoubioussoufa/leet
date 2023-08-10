#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int i = 0;
//         int j = 0;
//         int x = -1;
//         int z;
//         while (j < haystack.length())
//         {
//             z = j;
//             while (haystack[z] == needle[i])
//             {
//                 if (x == -1)
//                     x = z;
//                 i++;
//                 if (i == needle.length())
//                     return x;
//                 z++;
//             }
//             i = 0;
//             x = -1;
//             j++;
//         }
//         if (i == needle.length())
//             return x;
//         return -1;
//     }
// };

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int i = haystack.find(needle);
//         if(i != string::npos)
//             return i;
//         return -1;
//     }
// };

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle) != string::npos ? haystack.find(needle) : -1;
    }
};

int main()
{
    Solution s;

    cout << s.strStr("mississippi", "issip") << endl;
}