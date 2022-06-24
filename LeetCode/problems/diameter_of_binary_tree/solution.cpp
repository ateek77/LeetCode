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
    int depth(TreeNode *root){
        if(!root) return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int leftDepth,rightDepth,leftDiameter,rightDiameter;
        
        leftDepth = depth(root->left);
        rightDepth = depth(root->right);
        
        leftDiameter = diameterOfBinaryTree(root->left);
        rightDiameter = diameterOfBinaryTree(root->right);
        
        int result = max(leftDiameter,rightDiameter);
        
        return max(result,leftDepth+rightDepth);
        
    }
};