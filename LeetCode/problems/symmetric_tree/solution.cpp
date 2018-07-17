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
   bool check(TreeNode* r1,TreeNode* r2)
    {
        if(!r1 && !r2)
            return 1;
        else if(r1 && !r2 || r2 && !r1 || r1->val !=r2->val )
            return 0;
        return check(r1->left ,r2->right) && check(r1->right ,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return 1;
        return check(root->left,root->right);  
    }
};