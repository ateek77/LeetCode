/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int __ = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    void dt(TreeNode *root,vector<int> &v,int k)
    {
        if(!root || k<0)
            return ;
        if(k==0)
        {
            v.push_back(root->val);
            return ;
        }
        dt(root->left,v,k-1);
        dt(root->right,v,k-1);
        return ;
    }
    int kd(TreeNode *root,TreeNode* target,vector<int> &v,int k)
    {
        if(!root)
            return -1;
        if(root==target)
        {
            dt(root,v,k);
            return k-1;
        }
        int l=kd(root->left,target,v,k);
        int r=kd(root->right,target,v,k);
        
        if(l==-1 && r==-1)
            return -1;
        if(r!=-1)
        {
            if(r==0)
                v.push_back(root->val);
            else
               dt(root->left,v,r-1);
            return r-1;
        }
        else
        {
            if(l==0)
                v.push_back(root->val);
            else
                dt(root->right,v,l-1);
            return l-1;
        }
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        vector<int> v;
        kd(root,target,v,K);
        return v;
    }
};