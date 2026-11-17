'''
Maximum Depth of Binary Tree

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
'''
from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None: # base case 
            return 0
        
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))

# time: O(n) - because no nodes visited twice
# space: O(h) - height determines the space. O(log n) for full levels of the tree. O(n) is one sided tree which is worst case because all nodes are stacked up; taller tree means deeper stack
            
        
