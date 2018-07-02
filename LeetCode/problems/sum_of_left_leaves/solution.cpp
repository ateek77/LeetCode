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
    int trav(TreeNode *root,int flg)
    {
        if(!root)
            return 0;
        if(!root->left && !root->right){
            if(flg)
                return root->val;
            else
                return 0;
        }
        return trav(root->left ,1)+trav(root->right ,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return trav(root,0);   
    }
};