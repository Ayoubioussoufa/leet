/**
 * @param {number[]} nums
 * @return {number}
 */
var findLHS = function(nums) {
    let map = {};
    let len = 0;

    for (let num of nums) {
        map[num] = (map[num] || 0) + 1;
    }
    for (let [key, value] of Object.entries(map)) {
        if (map[key - 1]) {
            len = Math.max(len, map[key - 1] + value)
        }
    }
    return len;
};

let nums = [1,3,2,2,5,2,3,7];
console.log(findLHS(nums));