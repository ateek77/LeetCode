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
    void trav(TreeNode * root,unordered_map<int,int> &mp)
    {
        if(!root)
            return ;
        mp[root->val]++;
        trav(root->left,mp);
        trav(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int ,int> mp;
        trav(root,mp);
        int mx=0;
        vector<int> v;
        for(auto it : mp)
        {
            if(it.second >mx)
            {
                v.clear();
                mx=it.second;
                v.push_back(it.first);
            }
            else if(mx == it.second)
                v.push_back(it.first);                
        }
        return v;
    }
};