#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it = nums.end();
        return *(it - k);
    }
};

int main()
{
    Solution s;

    vector<int> ss;
    ss.push_back(1);
    ss.push_back(3);
    ss.push_back(555);
    ss.push_back(2);
    ss.push_back(55);
    ss.push_back(95);
    ss.push_back(65);
    ss.push_back(5);
    ss.push_back(51);
    ss.push_back(25);

    cout << s.findKthLargest(ss, 2);
}