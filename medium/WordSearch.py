class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        def backTracking(i, j, k):
            if k == len(word):
                return True
            if i < 0 or i >= len(board) or j < 0 or j >= len(board[i]) or board[i][j] != word[k]:
                return False
            temp = board[i][j]
            board[i][j] = ''
            if backTracking(i+1, j, k+1) or backTracking(i-1, j, k+1) or backTracking(i, j+1, k+1) or backTracking(i, j-1, k+1):
                return True
            board[i][j] = temp
            return False

        for i in range(len(board)):
            for j in range(len(board[i])):
                if backTracking(i, j, 0):
                    return True
        return False

s = Solution()
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCCED"
print(s.exist(board, word))