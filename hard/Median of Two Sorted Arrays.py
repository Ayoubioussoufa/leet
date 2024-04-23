import bisect

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        for num in nums1:
            index = bisect.bisect_right(nums2, num)
            nums2.insert(index, num)

        if len(nums2) % 2:
            median =  (nums2[int(len(nums2) / 2)])
        else:
            median =  float((nums2[int(len(nums2)/2)] + nums2[int(len(nums2)/2) - 1]) / 2)
        formatted_median = "{:.5f}".format(median)
        return formatted_median
        
        
s = Solution()
nums1 = [1, 2]
nums2 = [3, 4]
print(s.findMedianSortedArrays(nums1, nums2))
        