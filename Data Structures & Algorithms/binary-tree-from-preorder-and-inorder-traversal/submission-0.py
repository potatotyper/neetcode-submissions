# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    pre = []
    ino = []
    

    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        def treeBuild(arr, node, mode) :
            if arr == []:
                return
            nval = None
            for i in pre:
                if i in arr:
                    nval = i
                    break
            if nval == None:
                return
            nnode = TreeNode(nval)
            if mode :
                node.right = nnode
            else:
                node.left = nnode
            index = arr.index(nval)
            l = arr[:index]
            r = arr[index+1:]
            treeBuild(l, nnode, 0)
            treeBuild(r, nnode, 1)
            return

        pre = preorder
        ino = inorder
        root = TreeNode(val=preorder[0])
        index = inorder.index(preorder[0])
        l = inorder[:index]
        r = inorder[index+1:]
        treeBuild(l,root, 0)
        treeBuild(r,root, 1)
        return root
    
   

        

