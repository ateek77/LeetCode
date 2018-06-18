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
    int check(TreeNode *root,int &val)
    {
        if(!root || !val)
            return 0;
        int l =check(root->left,val);
        int r =check(root->right,val);
        
        if(abs(l-r)>1)
            val=0;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        int chk=1;
        check(root,chk);
        return chk;
    }
};