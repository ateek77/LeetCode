/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int f=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    void trav(TreeNode *root,vector<int> &v)
    {
        if(!root)
            return ;
        trav(root->left,v);
        v.push_back(root->val);
        trav(root->right,v);
 }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        trav(root,v);
        int i=0,j=v.size()-1;
        
        while(i<j)
        {
            if(v[i]+v[j]==k)
                return 1;
            else if(v[i]+v[j]<k)
                ++i;
            else
                --j;
        }
        return 0;
        
    }
};