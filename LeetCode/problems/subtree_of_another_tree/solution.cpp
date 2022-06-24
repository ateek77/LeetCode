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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return 1;
        if(!p || !q) return 0;
        if(p->val != q->val) return 0;
        if(!isSameTree(p->left,q->left) || !isSameTree(p->right,q->right))
            return 0;
        return 1;
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(!root || !subroot) return 0;
        if(root->val == subroot->val && isSameTree(root,subroot))
            return 1;
        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
            
            
    }
};