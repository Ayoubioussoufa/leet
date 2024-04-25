class Solution(object):
    def longestIdealString(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        l = [0] * 128
        for c in s:
            i = ord(c)
            l[i] = max(l[i - k : i + k + 1]) + 1
            print(l[i])
        return max(l)

s = Solution()
st = "pvjcci"
k = 4
print(s.longestIdealString(st, k))


