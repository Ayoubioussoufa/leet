#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

int main()
{
    Solution s;

    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    int i = s.removeElement(nums, 30);
    cout << i << endl;
}