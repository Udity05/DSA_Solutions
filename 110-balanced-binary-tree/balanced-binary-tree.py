# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
         def check(node):
            if not node:
                return 0  # height = 0

            left = check(node.left)
            if left == -1:
                return -1  # left subtree unbalanced

            right = check(node.right)
            if right == -1:
                return -1  # right subtree unbalanced

            if abs(left - right) > 1:
                return -1  # current node unbalanced

            return 1 + max(left, right)  # return height if balanced

         return check(root) != -1