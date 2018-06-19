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
    void flatten(TreeNode* root) {
        if(!root)
            return ;
        if(root->left)
        {
            TreeNode *tp=root->left;
            while(tp->right)
                    tp=tp->right;
            tp->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
        flatten(root->right);        
    }
};