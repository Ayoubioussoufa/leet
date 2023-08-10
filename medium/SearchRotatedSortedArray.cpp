#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int i = 0;
//         for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
//         {
//             if (*it == target)
//                 return i;
//             i++;
//         }
//         return -1;
//     }
// }; // with O(n) time complexity

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[left] <= nums[mid]) // nums[left] < target < nums[mid]
            {
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else // nums[mid] < target < nums[right]
            {
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
}; // provided modified binary search algorithm for rotated sorted arrays maintains a time complexity of O(log n).

int main()
{
    Solution s;

    vector<int> nums;
    // nums.push_back(3);
    // nums.push_back(5);
    // nums.push_back(6);
    // nums.push_back(7);
    // nums.push_back(0);
    // nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    cout << s.search(nums, 5) << endl;
}