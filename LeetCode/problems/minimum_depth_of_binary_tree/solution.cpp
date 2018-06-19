/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int min_d(TreeNode *root)
    {
        if(!root)
            return INT_MAX;
        if(!root->left && !root->right)
                return 1;
        return min(min_d(root->left),min_d(root->right))+1;
        
    }
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        return min_d(root);
    }
};