/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let buy = prices[0];
    let profit = 0;
    for (let i = 1; i < prices.length; i++) {
        if (prices[i] < buy)
            buy = prices[i];
        if (prices[i] - buy > profit)
            profit = prices[i] - buy;
    }
    return profit;
};

let prices = [7,1,5,3,6,4];
console.log(maxProfit(prices));

/*Kadane's Algorithm
Kadane's Algorithm is a dynamic programming technique used to find the maximum subarray sum in an array of numbers. The algorithm maintains two variables: max_current represents the maximum sum ending at the current position, and max_global represents the maximum subarray sum encountered so far. At each iteration, it updates max_current to include the current element or start a new subarray if the current element is larger than the accumulated sum. The max_global is updated if max_current surpasses its value. */

/**
 * Complexity
 * Time complexity: O(n), where n is the length of the prices array. The algorithm iterates through the array once.
 * Space complexity: O(1), as only a constant amount of extra space is used.
 */