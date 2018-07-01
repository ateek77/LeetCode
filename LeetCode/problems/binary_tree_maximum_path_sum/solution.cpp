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
    int MP(TreeNode *rt,int &m)
    {
        if(!rt)
            return 0;
        int l = max(0,MP(rt->left,m));
        int r= max(0,MP(rt->right ,m));
        m =max(m,l+r+rt->val);
        return rt->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int  m=INT_MIN;
        MP(root,m);
        return m;
    }
};