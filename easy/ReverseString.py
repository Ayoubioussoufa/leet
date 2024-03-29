class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        j = 1
        for i in range(len(s)):
            if i < len(s) / 2:
                temp = s[i]
                s[i] = s[-j]
                s[-j] = temp
                j += 1

class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        s[:] = s[::-1]


# Both O(1)

s = Solution()
s.reverseString(["h","e","l","l","o"])