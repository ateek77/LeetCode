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
        void trav(TreeNode *root,TreeNode *&t)
        {
            if(!root)
                return ;
            trav(root->right,t);
            if(t)
                root->val+=t->val;
            t=root;
            trav(root->left,t);
        }
    TreeNode* convertBST(TreeNode* root) {
        TreeNode *t=NULL;
        trav(root,t);
        return root;
    }
};