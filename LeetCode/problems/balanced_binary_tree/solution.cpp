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
    int hight(TreeNode* root){
        if(!root) return 0;
        return 1+max(hight(root->left),hight(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return 1;
        if(!isBalanced(root->left) || !isBalanced(root->right))
            return 0;
        int leftHight,rightHight;
        leftHight=hight(root->left);
        rightHight=hight(root->right);
        if(abs(leftHight-rightHight)>1)return 0;
        return 1;
        
    }
};