#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int j = -1, i = -1;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            j++;
            i = -1;
            for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++)
            {
                i++;
                if (it != iter && (*it + *iter) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result ;
                }
            }
        }
        return result;
    }
}; // 46% better

#include <cmath>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
           int complement = target - nums[i];
           if (map.find(complement) != map.end())
           {
                result.push_back(map[complement]);
                result.push_back(i);
                return result;
           }
           map[nums[i]] = i;
        }
        return result;
    } // 96% better
};

int main()
{
    Solution s;
    vector<int> p;
    vector<int> ss;
    p.push_back(3);
    p.push_back(2);
    p.push_back(4);
    ss = s.twoSum(p, 6);
    for (vector<int>::iterator iter = ss.begin(); iter != ss.end(); iter++)
    {
        cout << *iter << endl;
    }
}