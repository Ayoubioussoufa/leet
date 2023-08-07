#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int i = 0;
//         if (matrix.empty() || matrix[0].empty()) {
//             return false;
//         }
//         if (std::find(matrix[0].begin(), matrix[0].end(), target) != matrix[0].end())
//             return true;
//         while (i < matrix.size())
//         {
//             vector<int>::iterator it = matrix[i].begin();
//             if (*it <= target)
//             {
//                 if (i + 1 < matrix.size())
//                     i++;
//                 else
//                     break ;
//             }
//             else
//             {
//                 i--;
//                 break ;
//             }
//         }
//         if (i < 0)
//             return false;
//         if (std::find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end())
//             return true;
//         return false;        
//     }
// }; with O(m * n) time complexity

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows * cols - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midElement = matrix[mid / cols][mid % cols];
            if (midElement == target) {
                return true;
            } else if (midElement < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
}; // with O(log(m*n)) time complexity, we used binary search !! 


int main()
{
    Solution s;
    int rows = 5;
    int cols = 5;

    // Create a 2D vector with initial values of 0
    std::vector<std::vector<int>> my2DVector(rows, std::vector<int>(cols, 0));
    //Fill the 2D vector with values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            my2DVector[i][j] = (i + 1) * (j + 1) + 5;
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << my2DVector[i][j] << " ";
        }
        std::cout << std::endl;
    }
    cout << "---------------------" << endl;
    cout << s.searchMatrix(my2DVector, 30) << endl;
}

/*
inary search is a search algorithm used to find the position of a specific target value in a sorted array. It follows a divide-and-conquer strategy and efficiently reduces the search space by half in each iteration. The algorithm works by repeatedly dividing the search range and comparing the middle element with the target value until the target is found or the search range becomes empty.

Here's how binary search works step-by-step:

Initialize the search range: For binary search to work, the input array must be sorted in ascending order. The search range is initially the entire array.

Find the middle element: Calculate the index of the middle element in the current search range. If the search range has an even number of elements, you can choose either of the two middle elements.

Compare with the target: Compare the middle element with the target value.

Adjust the search range: Depending on the comparison result, you can either narrow the search range to the left or right half of the array.

Repeat: Continue the process by repeating steps 2 to 4 until the target element is found or the search range becomes empty (left index > right index).
*/

/*
    In algorithm analysis, O(log(m * n)) time complexity represents a sub-linear time complexity, which is better than linear time complexity (O(m * n)) but worse than constant time complexity (O(1)).

When an algorithm has a time complexity of O(log(m * n)), it means the time it takes to execute the algorithm grows logarithmically with the product of the input sizes m and n. As the input sizes increase, the time it takes for the algorithm to complete grows at a slower rate compared to linear time complexity.

In practical terms, logarithmic time complexity is very efficient, especially for large datasets. For example, if m = 1000 and n = 1000, an algorithm with O(log(m * n)) time complexity would execute in roughly the same time as an algorithm with O(log 1000) = O(10) time complexity. As m and n increase, the time grows at a slower rate compared to linear algorithms (O(m * n)), making it suitable for handling large-scale data processing efficiently.

Common algorithms that achieve O(log(m * n)) time complexity are binary search and various tree-based algorithms, like binary search trees, AVL trees, and red-black trees. These algorithms exploit the property of dividing the search space into roughly half in each step, allowing them to quickly narrow down the search and find the target or perform other operations efficiently.

O(log(m * n)) = O(log(m) + log(n)) !!! 
*/