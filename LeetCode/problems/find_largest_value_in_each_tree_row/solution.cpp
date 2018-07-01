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
    void trav(TreeNode* root,vector<int> &v,int l)
    {
        if(!root)
            return;
        if(v.size()>l)
            v[l] = max(v[l],root->val);
        else
            v.push_back(root->val);
        trav(root->left,v,l+1);
        trav(root->right,v,l+1);
    }
    vector<int> largestValues(TreeNode* root) {
        
        vector<int> v;
        trav(root,v,0);
        return v;
    }
};