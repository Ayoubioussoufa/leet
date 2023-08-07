#include <iostream>
#include <vector>
#include <algorithm> // Include this for std::find

int main() {
    std::vector<std::vector<int>> my2DVector = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Find the iterator pointing to element 7
    auto it = my2DVector.begin();
    auto end = my2DVector.end();
    for (; it != end; ++it) {
        auto innerIt = std::find(it->begin(), it->end(), 7); // Use std::find on the inner vector
        if (innerIt != it->end()) {
            // Element 7 is found!
            std::cout << "Element 7 is found." << std::endl;
            break;
        }
    }

    if (it != end) {
        // Iterator points to the vector containing element 7
        std::cout << "Element 7 is in the vector at row " << std::distance(my2DVector.begin(), it)
                  << ", column " << std::distance(it->begin(), std::find(it->begin(), it->end(), 7)) << std::endl;
    } else {
        std::cout << "Element 7 is not found in the 2D vector." << std::endl;
    }

    return 0;
}
