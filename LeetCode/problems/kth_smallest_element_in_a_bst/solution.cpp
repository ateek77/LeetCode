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
    int kthSmallest(TreeNode* root, int &k) {
        if(!root)
            return -1;
        int l = kthSmallest(root->left,k);
        --k;
        if(k<=0)
            return k==0 ? root->val : l;
        return kthSmallest(root->right , k);
    }
};