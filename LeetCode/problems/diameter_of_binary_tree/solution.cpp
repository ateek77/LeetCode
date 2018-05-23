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
    int die(TreeNode *rt,int &mx)
    {
        if(!rt)
            return 0;
        if(!rt->left && !rt->right)
                return 1;
        int l =die(rt->left,mx);
        int r =die(rt->right ,mx);
        
        mx = mx>(l+r)?mx:(l+r);
        return (l>r?l:r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=0;
        die(root,mx);
        return mx;
    }
};