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
    void trav(TreeNode *root,vector<string> &str,string s)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
            s+=to_string(root->val);
             str.push_back(s);
                return ;
        }
        s+=to_string(root->val) + "->";
        trav(root->left,str,s);
        trav(root->right,str,s);        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
     
        vector<string> str;
        trav(root,str,"");
        return str;
    }
};