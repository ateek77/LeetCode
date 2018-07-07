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
     bool isValidBST(TreeNode* root) {

        return f(root, LONG_MIN, LONG_MAX);
    }
    
     bool f(TreeNode* root,long minv, long maxv) {
        //std::cout<<root->val<<" "<<minv<<" " << maxv<<std::endl;

        if (!root)
            return true;
         if (root->val <= minv)
             return false;
         if (root->val >= maxv)
             return false;

        if (root->left && !f(root->left, minv , root->val)) {
            
            return false;
        }
            
            
       if (root->right && !f(root->right,root->val, maxv)) {
           return false;
       }
        return true;
    }
  
};