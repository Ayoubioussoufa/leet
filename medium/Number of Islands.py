class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        def recurse(i, j):
            if i < 0 or i >= len(grid) or j >= len(grid[0]) or j < 0 or grid[i][j] != '1':
                return 
            grid[i][j] = '0'         
            recurse(i + 1, j)
            recurse(i, j + 1)
            recurse(i - 1, j)
            recurse(i, j - 1)
        islands = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    islands += 1
                    recurse(i, j)
        return islands

s = Solution()
grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
print(s.numIslands(grid))