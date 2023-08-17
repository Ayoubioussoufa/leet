#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i]; // can segf here
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          nums1.erase(nums1.begin()+m,nums1.end());
    for(int i = 0; i<m; i++){
        nums1.push_back(nums1[i]);
        nums1.pop_back();
    }
    for(int i = 0; i<n; i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
    }
    
};
*/

//for commit

int main()
{
    Solution s;

    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    // nums2.push_back();

    s.merge(nums1, 3, nums2, 30);
}