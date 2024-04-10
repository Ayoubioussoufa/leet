from collections import deque

class Solution(object):
    def deckRevealedIncreasing(self, deck):
        """
        :type deck: List[int]
        :rtype: List[int]
        """
        deck.sort()
        n = len(deck)
        result = [0] * n
        indices = deque(range(n))
        for card in deck:
            idx = indices.popleft()
            result[idx] = card
            if indices:
                indices.append(indices.popleft())
        return result
            
             

s = Solution()
print('Final product :', s.deckRevealedIncreasing([17,13,11,2,3,5,7]))