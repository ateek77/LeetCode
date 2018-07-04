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
    bool check(TreeNode *root,TreeNode *root2)
    {
        if(!root && !root2)
            return 1;
        if(!root && root2 || root && !root2)
            return 0;
        return root->val == root2->val && check(root->left,root2->left ) && check(root->right, root2->right);
    }
        
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)
            return 0;
        if(s->val==t->val && check(s,t))
            return 1;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
            
    }
};