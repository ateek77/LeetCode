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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        TreeNode *l,*r;
        l =lowestCommonAncestor(root->left,p,q);
        r=lowestCommonAncestor(root->right,p,q);
        if(l && r)
            return root;
        if(root==p || root==q)
                return root; 
        return l ? l : r ;
        //return NULL;        
    }
};