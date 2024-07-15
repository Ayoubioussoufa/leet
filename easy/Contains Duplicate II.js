/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */

var containsNearbyDuplicate = function(nums, k) {
    const hasmap = new Map();
    for (let idx = 0; idx < nums.length; idx++) {
        // Check if the difference between duplicates is less than or equal to k
        if (idx - hasmap.get(nums[idx]) <= k) {
            return true;
        }
        hasmap.set(nums[idx], idx);
    }
    return false;
};

let nums = [0,1,2,3,4,0,0,7,8,9,10,11,12,0];
let k = 1;
console.log(containsNearbyDuplicate(nums, k));

/**
 * The algorithm runs in O(n) time complexity due to a single pass through the nums array, with O(n) space complexity for the Map to store indices.
 */