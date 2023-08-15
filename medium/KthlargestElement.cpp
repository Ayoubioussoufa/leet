#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <queue>
using namespace std;

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         vector<int>::iterator it = nums.end();
//         return *(it - k);
//     }
// }; //with sorting

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        while (k > 1)
        {
            std::vector<int>::iterator maxElementIterator = std::max_element(nums.begin(), nums.end());
            std::remove(nums.begin(), nums.end(), *maxElementIterator), nums.end();
            nums.pop_back();
            k--;
        }
        std::vector<int>::iterator maxElementIteratr = std::max_element(nums.begin(), nums.end());
        return *(maxElementIteratr);
    }
}; // without sorting too bad it doesnt work completely


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap
        
        for (int num : nums) {
            if (minHeap.size() < k) {
                minHeap.push(num);
            } else if (num > minHeap.top()) {
                minHeap.pop();
                minHeap.push(num);
            }
        }
        
        return minHeap.top();
    }
}; // best one 

int main()
{
    Solution s;

    vector<int> ss;
    ss.push_back(3);
    ss.push_back(2);
    ss.push_back(3);
    ss.push_back(1);
    ss.push_back(2);
    ss.push_back(4);
    ss.push_back(5);
    ss.push_back(5);
    ss.push_back(6);
    // ss.push_back(25);

    cout << s.findKthLargest(ss, 4);
}