#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            if (*it == target)
                return true;
            i++;
        }
        return false;
    }
}; // with O(n) time complexity