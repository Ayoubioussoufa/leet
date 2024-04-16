# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def addOneRow(self, root, val, depth):
        """
        :type root: TreeNode
        :type val: int
        :type depth: int
        :rtype: TreeNode
        """
        def recurse(root, val, depth):
            if root is None:
                return None
            if depth == 2:
                root.left = TreeNode(val, root.left, None)
                root.right = TreeNode(val, None, root.right)
            else:
                recurse(root.left, val, depth -1)
                recurse(root.right, val, depth -1)
            return root
                
        if depth == 1:
            return TreeNode(val, root, None)
        return recurse(root, val, depth)

def print_tree_inorder(root):
    if root is not None:
        # Traverse the left subtree
        print_tree_inorder(root.left)
        # Print the value of the current node
        print(root.val, end=" ")
        # Traverse the right subtree
        print_tree_inorder(root.right)

def sizeTree(root):
    if root is None:
        return 0
    left_size = sizeTree(root.left)
    right_size = sizeTree(root.right)
    return 1 + left_size + right_size

node3 = TreeNode(3)
node1 = TreeNode(1)
node5 = TreeNode(5)
node2 = TreeNode(2, node3, node1)
node6 = TreeNode(6, node5)
node4 = TreeNode(4, node2, node6)
root = node4

print('Before: ')
print(sizeTree(root))
print_tree_inorder(root)
print()
s = Solution()
s.addOneRow(root, 1, 2)
print()
print('After: ')
print(sizeTree(root))
print_tree_inorder(root)
