from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def depth(self, root: Optional[TreeNode]) -> int:
        if root is None: # root is Null so depth is 0
            return 0
        return max(self.depth(root.left), self.depth(root.right)) + 1

if __name__ == "__main__":
    root = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print(Solution().depth(root))

# time: O(n) since visits every node once
# space: depth of the tree so worst case is one whole left side/right side of tree so O(n) and best case is O(h)
