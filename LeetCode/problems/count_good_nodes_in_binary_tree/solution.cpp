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
class Solution{
public:
    void find(TreeNode* root,int max_root,int &res){
        if(!root)   return;
        if(  root->val >= max_root){
            res++;
        }
        find(root->left,max(root->val,max_root),res);
        find(root->right,max(root->val,max_root),res);
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int result=1;
        
        find(root->left,root->val,result);
        find(root->right,root->val,result);
        
        return result;
        
    }
};