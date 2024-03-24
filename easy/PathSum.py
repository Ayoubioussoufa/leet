# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def hasPathSum(self, root, targetSum):
        if root is None:
            return False
        if root.left is None and root.right is None:
            return root.val == targetSum
        return self.hasPathSum(root.left, targetSum - root.val) or self.hasPathSum(root.right, targetSum - root.val)

# Construct the binary tree
#       5
#      / \
#     4   8
#    /   / \
#   11  13  4
#  /  \      \
# 7    2      1

# Create tree nodes
node7 = TreeNode(7)
node2 = TreeNode(2)
node11 = TreeNode(11, node7, node2)
node4 = TreeNode(4, node11)
node13 = TreeNode(13)
node1 = TreeNode(1)
node4_2 = TreeNode(4, None, node1)
node8 = TreeNode(8, node13, node4_2)
node5 = TreeNode(5, node4, node8)
root = node5

solution = Solution()
print(solution.hasPathSum(root, 22))