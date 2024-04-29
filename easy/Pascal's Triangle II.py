class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        array = []
        previousOne = []
        lists = list(list())
        for num in range(1, rowIndex + 2):
            value = num
            while (value):
                if len(array) == 0 or len(array) == num - 1:
                    array.append(1)
                else:
                    array.append(previousOne[len(array) - 1] + previousOne[len(array)])
                value -= 1
            previousOne = []
            previousOne = array
            lists.append(array)
            array = []
        return lists[rowIndex]

s = Solution()
print(s.getRow(1))