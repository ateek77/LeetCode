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
    void trav(TreeNode* root,vector<int> &v)
    {
        if(!root)
            return;
       
        trav(root->left,v);
         v.push_back(root->val);
        trav(root->right,v);
        return ;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        trav(root, v);
        return v;
    }
};