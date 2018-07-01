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
    bool trav(TreeNode* r1,TreeNode *r2)
    {
        if(!r1 && !r2)
            return 1;
        if(!r1 && r2 || !r2 && r1)
            return 0;
        return r1->val == r2->val &&  trav(r1->left,r2->right) && trav(r1->right ,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return trav(root,root);
        
    }
};