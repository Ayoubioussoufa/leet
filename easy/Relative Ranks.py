class Solution(object):
    def findRelativeRanks(self, score):
        """
        :type score: List[int]
        :rtype: List[str]
        """
        arr = [''] * len(score)
        i = 0
        while i < len(score):
            num = score.index(max(score))
            if i == 0:
                arr[num] = "Gold Medal"
            elif i == 1:
                arr[num] = "Silver Medal"
            elif i == 2:
                arr[num] = "Bronze Medal"
            else:
                arr[num] = str(i + 1)
            i += 1
            score[num] = -1
        return arr
                

s = Solution()
score = [10,3,8,9,4]
print(s.findRelativeRanks(score))