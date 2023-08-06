#include <iostream>
#include <vector>
#include <set>
using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.size() == 2 && nums[0] == nums[1])
//         {
//             nums.pop_back();
//             return (1);
//         }
//         for (size_t j = 0; j < nums.size() - 1; j++)
//         {
//             for (size_t z = nums.size() - 1; z > j; z--)
//             {
//                 if (nums[j] == nums[z])
//                     nums.erase(nums.begin() + z);
//             }
//         }
//         return nums.size();
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t i = 0, next = 1;
        while (next < nums.size())
        {
            if (nums[next] == nums[i])
                next++;
            else
            {
                i++;
                nums[i] = nums[next];
                next++;
            }
        }
        return i + 1;
    }
}; // better and faster 
int main()
{
    Solution s;
    vector<int> p;
    p.push_back(0);
    p.push_back(0);
    p.push_back(1);
    p.push_back(1);
    p.push_back(1);
    p.push_back(2);
    p.push_back(2);
    p.push_back(3);
    p.push_back(3);
    p.push_back(4);

    int i = s.removeDuplicates(p);
    cout <<  "  -------------------   "    << i << endl;
    for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
    {
        std::cout << *it << endl;
    }
}