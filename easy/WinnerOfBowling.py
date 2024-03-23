from typing import List

class Solution:
    def isWinner(self, player1: List[int], player2: List[int]) -> int:
        def scores(nums):
            res = 0
            prev1 = 0
            prev2 = 0
            for n in nums:
                if prev1 == 10 or prev2 == 10:
                    res += 2 * n
                else:
                    res += n
                prev2 = prev1
                prev1 = n
            return res

        s1 = scores(player1)
        s2 = scores(player2)

        if s1 == s2:
            return 0
        return 1 if s1 > s2 else 2