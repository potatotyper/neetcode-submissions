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
    vector<vector<int>> ret;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) {
            return ret;
        }
        traverse(root, 0);
        return ret;
    }

    void traverse(TreeNode* root, int level) {
        if(ret.size() > level ) {
            ret[level].push_back(root->val);
        } else {
            vector<int> narr;
            narr.push_back(root->val);
            ret.push_back(narr);
        }
        if(root->left) {
            traverse(root->left, level + 1);
        } 
        if (root->right) {
            traverse(root->right, level + 1);
        }
    }
};
