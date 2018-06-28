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
    int Sum(TreeNode *root,int &sum)
    {
        if(!root)
            return 0;
        int l  =Sum(root->left,sum);
        int r =Sum(root->right,sum);
        sum+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        int sum=0;
        Sum(root,sum);
        return sum;
    }
};