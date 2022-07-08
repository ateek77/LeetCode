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
    int max_sum=INT_MIN;    
    int maxSum(TreeNode *root){
        if(!root)   return 0;
        int left_sum = maxSum(root->left);
        int right_sum = maxSum(root->right);
        int current_max = INT_MIN;
        current_max = max(current_max,root->val);
        current_max = max(current_max,root->val+left_sum);
        current_max = max(current_max,root->val+right_sum);
        max_sum = max(current_max,max_sum);
        max_sum = max(max_sum,left_sum + root->val + right_sum);
        
        return current_max;
    }
    int maxPathSum(TreeNode* root) {
        maxSum(root);
        return max_sum;
    }
    
};