/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int x=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    void trav(TreeNode* root,map<int,vector<double>> &v,int l)
    {
        if(!root)
            return ; 
        v[l].push_back(root->val);
        
        trav(root->left,v,l+1);
        trav(root->right,v,l+1);        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        map<int,vector<double>> v;
        trav(root,v,0);
        vector<double> vv;
        for(auto it : v)
        {
            double sum=0;
            for(auto itt:it.second)
            {
                sum+=itt;
            }
            vv.push_back(sum/it.second.size());
        }
        return vv;
    }
};