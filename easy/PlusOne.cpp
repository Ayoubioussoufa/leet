#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int>::iterator it = digits.end() - 1;
//         if (*it != 9)
//             digits[*it] += 1;
//         else
//         {
//             digits[*it - 1] += 1; 
//             digits.push_back(0);
//         }
//         return digits;
//     }
// };


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }
        if (carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};

int main()
{
    Solution s;

    vector<int> p;
    p.push_back(1);
    p.push_back(9);
    p.push_back(9);
    // p.push_back(7);
    // p.push_back(6);
    // p.push_back(5);
    // p.push_back(4);
    // p.push_back(3);
    // p.push_back(2);
    // p.push_back(1);
    // p.push_back(0);
    vector<int> solution;
    solution = s.plusOne(p);
    for (vector<int>::iterator it = solution.begin(); it != solution.end(); it++)
    {
        cout << *it << endl;
    }
}