# https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        def recurse_tree(current):
            if not current:
                return False
            
            left = recurse_tree(current.left)
            right = recurse_tree(current.right)
            
            check = current == p or current == q
            
            #left & check 
            # left & right
            # right & check
            
            if check + left + right >= 2:
                self.ans = current
            
            return check or left or right
        
        recurse_tree(root)
        return self.ans
