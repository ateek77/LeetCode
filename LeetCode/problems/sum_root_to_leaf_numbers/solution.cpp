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
    int sum_p(TreeNode *root,int num)
    {
        if(!root)
            return  0;
        num=num*10+root->val;
        if(!root->left && !root->right)
            return num;
       return sum_p(root->left,num)+sum_p(root->right,num);        
    }
    int sumNumbers(TreeNode* root) { 
        return sum_p(root,0); 
    }
};