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
    int max_p(TreeNode*root,int &mx)
    {
       if(!root)
        return -99999;
        
        int l = max_p(root->left,mx);
        int r= max_p(root->right,mx);
        int v = root->val;
      
        mx = max(mx,max(v,max(l,r)));        
        mx = max(mx,max(l+r+v,v+max(l,r)));
        return max(v,v+max(l,r));        
    }
    int maxPathSum(TreeNode* root) {
        if(!root)
            return INT_MIN;
        int mx=INT_MIN;
        max_p(root,mx);
        return mx;
    }
};