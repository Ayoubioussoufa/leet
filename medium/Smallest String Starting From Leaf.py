# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def smallestFromLeaf(self, root):
        """
        :type root: TreeNode
        :rtype: str
        """
        def recurse(root, path):
            if root is None:
                return None
            path.append(chr(root.val + ord('a')))
            if not root.left and not root.right:
                rev_path = ''.join(path[::-1])
                if self.ans is None or rev_path < self.ans:
                    self.ans = rev_path
            recurse(root.left, path)
            recurse(root.right, path)
            path.pop()

        self.ans = None
        recurse(root, [])
        return self.ans


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

noded = TreeNode(3)
nodee = TreeNode(4)
noded2 = TreeNode(3)
nodee2 = TreeNode(4)
nodeb = TreeNode(1, noded, nodee)
nodec = TreeNode(2, noded2, nodee2)
nodea = TreeNode(0, nodeb, nodec)
root = nodea

print_tree_inorder(root)
print()
s = Solution()
print(s.smallestFromLeaf(root))