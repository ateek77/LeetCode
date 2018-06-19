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
    void find(TreeNode *root,vector<vector<int> > &vv,vector<int> v,int sum)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            if(sum==root->val)
            {
                v.push_back(root->val);
                vv.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        find(root->left,vv,v,sum-root->val);
        find(root->right,vv,v,sum-root->val);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > vv;
        vector<int> v;
        find(root,vv,v,sum);
        return vv;
    }
};