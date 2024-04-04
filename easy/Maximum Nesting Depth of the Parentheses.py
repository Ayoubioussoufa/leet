class Solution(object):
    def maxDepth(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        j = 0
        for chr in s:
            print(chr, i)
            if chr == '(':
                i += 1
            elif chr == ')':
                i -= 1
            if j < i:
                    j = i
        return j

s = Solution()
print(s.maxDepth("()"))

#Runtime 7ms
# Beats 95.55% of users with Python

# Memory 11.58MB
# Beats 86.64% of users with Python