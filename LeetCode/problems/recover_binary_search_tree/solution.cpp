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
  
    void trav(TreeNode *root,vector<int> &v)
    {
        if(!root)
            return;
        trav(root->left,v);
        v.push_back(root->val);
        trav(root->right,v);
    }
    void fill(TreeNode *root,int x,int y)
    {
        if(!root)
                return ;
        fill(root->left,x,y);
        if(root->val==x)
            root->val=y;
        else if(root->val==y)
            root->val=x;
        fill(root->right,x,y);
    }
    void recoverTree(TreeNode* root) {
      vector<int>  v;
        trav(root,v);
        int ind1=-1,ind2=-1;
        for(int i=0;i<v.size()-1;++i)
        {
            if( v[i]>v[i+1] && ind1==-1 )
                ind1 = i;
            else if(v[i]>v[i+1])
                ind2=i+1;                
        }
        
        ind2==-1? (ind2=ind1+1):ind2;
        
        fill(root,v[ind1],v[ind2]);
    }
};