class Solution(object):
    def makeGood(self, s):
        """
        :type s: str
        :rtype: str
        """
        i = 0
        while i < 10:
            index = 0
            while index < len(s) - 1:
                if abs(ord(s[index]) - ord(s[index + 1])) == 32:
                    s = s[:index] + s[index + 2:]
                    index = max(0, index - 1)  # Move index back one step
                else:
                    index += 1
            i += 1
        return s


st = Solution()
s = "leEeetcode"
print(st.makeGood(s))