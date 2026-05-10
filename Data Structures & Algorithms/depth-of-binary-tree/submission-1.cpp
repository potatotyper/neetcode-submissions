/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxcount = 1;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        traverse(root, 1);
        return maxcount;
    }

    void traverse(TreeNode* cur, int curcount) {
        if(cur->left) {
            maxcount = max(maxcount, curcount+1);
            traverse(cur->left, curcount+1);
        }
        if(cur->right) {
            maxcount = max(maxcount, curcount+1);
            traverse(cur->right, curcount+1);
        }
        return;
    }
};
