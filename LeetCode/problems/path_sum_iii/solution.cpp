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
    int find_sum(TreeNode *root,int k)
    { 
        if(!root)
            return k==0;
        
        return (k==0) + find_sum(root->left, k - root->val)+find_sum(root->right,k - root->val);
    }
    
    int pathSum(TreeNode* root, int sum) {
        
        if(!root)
            return 0; 
        
        return find_sum(root,sum)/2+ pathSum(root->left,sum)+pathSum(root->right,sum);
    }
}; 