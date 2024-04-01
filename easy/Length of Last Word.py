class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        j = 0
        s = s[::-1]
        print(1, s, len(s))
        while i < len(s):
            if j == 0 and s[i] == ' ':
                i = i
            elif j and s[i] == ' ':
                return j
            else:
                j += 1
            i += 1
        return j
        
        # or simply len(s.split()[-1])
            
            
s = Solution()
print(s.lengthOfLastWord("a "))