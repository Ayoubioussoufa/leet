class Solution(object):
    def vowelStrings(self, words, left, right):
        """
        :type words: List[str]
        :type left: int
        :type right: int
        :rtype: int
        """
        j = 0
        vo = ['a', 'e', 'i', 'o', 'u']
        for word in words[left:right + 1]:
            if word[0] in vo and word[-1] in vo:
                j += 1
        return j

s = Solution()
words = ["hey","aeo","mu","ooo","artro"]
print(s.vowelStrings(words, 1, 4))
                