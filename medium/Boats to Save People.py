class Solution(object):
    def numRescueBoats(self, people, limit):
        """
        :type people: List[int]
        :type limit: int
        :rtype: int
        """
        people = sorted(people)
        n = len(people) - 1
        i = 0
        boats = 0
        while (n >= i):
            if people[i] + people[n] <= limit:
                i += 1
            n -= 1
            boats += 1
        return boats

s = Solution()
people = [1,2]
limit = 3
print(s.numRescueBoats(people, limit))