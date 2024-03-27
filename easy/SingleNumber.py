class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = 0
        # XOR all elements in the array
        for num in nums:
            result ^= num
        return result
# We iterate through each element num in the array nums. For each element, we XOR it with the result. Since XORing any number with 0 returns the same number, and XORing two equal numbers returns 0, elements that appear twice will cancel each other out, leaving only the single element that appears once.
# both O(n)
  
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        print(2 * sum(set(nums)))
        return 2 * sum(set(nums)) - sum(nums)     
        
        
s = Solution()
print(s.singleNumber([2,2,1]))

#A   B   A XOR B
# 0   0      0
# 0   1      1
# 1   0      1
# 1   1      0

# XOR, or exclusive OR, is a logical bitwise operation that outputs true (1) if the number of true inputs is odd, and false (0) otherwise. It is often symbolized by the operator "^".