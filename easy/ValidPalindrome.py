import re

class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # if len(s) == 0:
        #     return True
        string = re.sub(r'[^a-zA-Z0-9]', '', s.lower())
        # rev = string[::-1]
        # for i, j in zip(string, rev):
        #     if i != j:
        #         return False
        # return True
        return s == s[::-1]

s = Solution()
print(s.isPalindrome("0P"))