/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static auto _init = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
};
class Solution {
public:
    void trav(TreeNode *root,map<int,int> &mp,int ind)
    {
        if(!root)
                return;
        if(!mp[ind])
            mp[ind]=root->val;
        trav(root->right,mp,ind+1);
        trav(root->left,mp,ind+1);        
    }
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> mp;
        trav(root,mp,0);
        vector<int> v;
        for(auto it:mp)
            v.push_back(it.second);
        return v;
    }
};