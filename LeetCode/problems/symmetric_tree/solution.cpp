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
    bool checkEqual(TreeNode *first,TreeNode *second){
        if(!first && !second)   return 1;
        if(!first || !second)   return 0;
        return (first->val == second->val) && checkEqual(first->left ,second->right) && checkEqual(first->right,second->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)   return 1;
        return checkEqual(root->left,root->right);
    }
};