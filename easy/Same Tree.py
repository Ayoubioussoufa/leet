# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q is None:
            return True
        if p is None or q is None:
            return False
        if p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)

s = Solution()
node2 = TreeNode(2)
node1 = TreeNode(1)
nodeR = TreeNode(1, node2, node1)
root = nodeR

node2_ = TreeNode(2)
node1_ = TreeNode(1)
nodeR_ = TreeNode(1, node2_, node1_)
# nodeA = TreeNode(55, nodeR_)
root_ = nodeR_

print(s.isSameTree(root, root_))