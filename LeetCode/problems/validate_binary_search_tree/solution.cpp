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
    bool check_validitiy(TreeNode *root,TreeNode *&prevNode){
        if(!root)   return true;
        if(!check_validitiy(root->left,prevNode))
            return false;
        if((prevNode && prevNode->val >= root->val))
            return false;
        prevNode = root;
        if(!check_validitiy(root->right,prevNode))
           return false;
        return true;              
    }
    bool isValidBST(TreeNode* root) {
        if(!root)   return true;
//         bool check=1;
        
        
//         if((root->left && root->left->val >=root->val))
//             return false;
        
//         if(root->right && root->right->val<=root->val)
//             return false;
        
//         if(isValidBST(root->left) && isValidBST(root->right))
//             return true;
        TreeNode *ref=NULL;
        return check_validitiy(root,ref);
    }
};