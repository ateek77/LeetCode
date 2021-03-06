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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        if(root->val == key)
        {
            if(!root->right)
                return root->left;
            
            TreeNode *tmp =root->right;
            while(tmp->left)
                tmp=tmp->left;
            root->val = tmp->val;
            root->right= deleteNode(root->right,tmp->val);
            return root;
        }
        if(root->val  > key)
            root->left = deleteNode(root->left,key);
        else
            root->right = deleteNode(root->right,key);
        return root;
    }
};