class Solution(object):
    def timeRequiredToBuy(self, tickets, k):
        """
        :type tickets: List[int]
        :type k: int
        :rtype: int
        """
        time = 0
        while(tickets[k]):
            for i in range(0, len(tickets)):
                if tickets[i] > 0:
                    time += 1
                    tickets[i] -= 1
                if tickets[k] == 0:
                    return time
        return time
        
s = Solution()
tickets = [84,49,5,24,70,77,87,8]
k = 3
print(s.timeRequiredToBuy(tickets, k));