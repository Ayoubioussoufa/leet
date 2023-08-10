#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int right = nums.size() - 1;
//         int left = 0;
//         int mid = 0;
//         while (left <= right)
//         {
//             mid = left + (right - left) / 2;
//             if  (nums[mid] < target)
//                 left = mid + 1;
//             else if (nums[mid] > target)
//                 right = mid - 1;
//             if (nums[mid] < target && mid + 1 <= nums.size() && nums[mid + 1] > target)
//                 return mid + 1;
//         }
//         if (nums[mid] < target && mid + 1 <= nums.size())
//             return mid + 1;
//         return mid;
//     }
// };

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid; // Found the target, return its index
            else if (nums[mid] < target)
                left = mid + 1; // Target is on the right side
            else 
                right = mid - 1; // Target is on the left side
        }
        // If the loop completes without finding the target, 'left' will point to the correct insertion position
        return left;
    }
};



int main()
{
    vector<int> p;
    p.push_back(1);
    // p.push_back(2);
    p.push_back(3);
    p.push_back(4);
    p.push_back(5);
    Solution s;

    cout << s.searchInsert(p, -2) << endl;
}