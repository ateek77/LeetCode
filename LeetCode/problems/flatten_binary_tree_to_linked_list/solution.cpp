/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void convertBSTtoLL(TreeNode* root){
        if(!root)   return ;
        TreeNode* left =root->left;
        
        while(left && left->right)
            left=left->right;
        if(left){
            left->right=root->right;
            root->right =root->left;            
            root->left=NULL;
        }        
        convertBSTtoLL(root->right);
    }
    void flatten(TreeNode* root) {
        convertBSTtoLL(root);
    }
};