#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) {
        return x;  // Square root of 0 and 1 is the number itself
    }
    
    int left = 1;
    int right = x;
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid <= x / mid) {
            // mid is a potential valid square root
            result = mid;
            left = mid + 1;  // Move to the right half
        } else {
            right = mid - 1;  // Move to the left half
        }
    }
    
    return result;
    }
};

int main()
{
    Solution s;

    cout << s.mySqrt(95) << endl;
}