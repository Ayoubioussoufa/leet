# class Solution(object):
#     def wonderfulSubstrings(self, word):
#         """
#         :type word: str
#         :rtype: int
#         """
#         count = 0
#         n = len(word)
#         for i in range(0, n):
#             dicts = [0] * 10
#             odd_count = 0
#             for j in range(i, n):
#                 index = ord(word[j]) - ord('a')
#                 dicts[index] += 1
#                 if dicts[index] % 2 == 1:
#                     odd_count += 1
#                 else:
#                     odd_count -= 1
#                 if odd_count <= 1:
#                     count += 1
#         return count
    # correct but too slow in large input /\

class Solution(object):
    def wonderfulSubstrings(self, word):
        """
        :type word: str
        :rtype: int
        """
        count = 0
        n = len(word)
        mask = 0
        char_to_bit = {char: 1 << (ord(char) - ord('a')) for char in 'abcdefghij'}
        counts = [0] * (1 << 10)
        counts[0] = 1
        for i in range(n):
            char = word[i]
            mask ^= char_to_bit[char]
            count += counts[mask]
            for j in range(10):
                count += counts[mask ^ (1 << j)]
            counts[mask] += 1
        return count  
    

s = Solution()              
word = "aba"
print(s.wonderfulSubstrings(word))