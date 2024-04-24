class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        F = [0] * 38
        F[0] = 0
        F[1] = 1
        F[2] = 1
        for i in range(3, n + 1):
            F[i] = F[i - 1] + F[i - 2] + F[i - 3]
        return F[n]

s = Solution()
print(s.tribonacci(25))
            