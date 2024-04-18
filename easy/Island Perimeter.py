class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        length = 0
        row, col = len(grid), len(grid[0])
        for i in range(row):
            for j in range(col):
                if (grid[i][j] == 1):
                    length += 4
                    if i > 0 and grid[i-1][j] == 1:
                        length -= 2
                    if j > 0 and grid[i][j-1] == 1:
                        length -= 2
        return length
        

s = Solution()
grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
print(s.islandPerimeter(grid))
