class Solution(object):
    def reversePrefix(self, word, ch):
        """
        :type word: str
        :type ch: str
        :rtype: str
        """
        index = 0
        for i in range(0, len(word)):
            if word[i] == ch:
                index = i
                break
        stt = word[index + 1:]
        word = ''.join(reversed(word[:index + 1]))
        word += stt
        return (word)

class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        x=0
        for i in range(len(word)):
            if word[x]==ch:
                return word[x::-1]+word[x+1:]
            x+=1
        return word
        # for first, second in enumerate(word[0:index+1]):
        #     print(first, second)
        # substring = word[:index+1]
        # for i, char in enumerate(substring):
        #     if i == 0:
        #         first = char  # Assign the first character
        #     elif i == len(substring) - 1:
        #         second = char
        #     print(first, second, i , char)
        
        
s = Solution()
word = "xyxzxe"
ch = "z"
print(s.reversePrefix(word, ch))