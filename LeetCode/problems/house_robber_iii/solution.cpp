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
    pair<int,int> sum(TreeNode *root)
    {
        if(!root)
            return make_pair(0,0); 
        pair<int,int> l,r,curn;
        l = sum(root->left);
        r = sum(root->right);
        curn.second = max(l.first,l.second)+max(r.first,r.second);
        curn.first = root->val + l.second + r.second ; 
        return curn;
    }
    int rob(TreeNode* root) {
        pair<int,int>  p =sum(root);
        return max(p.first,p.second);
    }
};