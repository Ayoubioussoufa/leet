class Solution(object):
    def findMaxK(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        array = []
        for num in nums:
            if num < 0:
                try :
                    array.append(nums.index(abs(num)))
                except: 
                    continue
        max_value = -1
        for i in array:
            if nums[i] > max_value:
                max_value = nums[i] 
        return max_value

s = Solution()
nums = [-10,8,6,7,-2,-3]
print(s.findMaxK(nums))