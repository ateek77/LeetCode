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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return 0; 
        if(!root->left && !root->right)
        {
            if(!(sum-root->val))
                return 1;
        }
        return (hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val));
    }
};