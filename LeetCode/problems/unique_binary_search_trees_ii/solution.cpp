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
    vector<TreeNode *> cont_tree(int s,int e)
    {
        
        vector<TreeNode*> v;
        if(e<s)
        {
            v.push_back(NULL);
            return v;
        }
        for(int i=s;i<=e;++i)
        {
            vector<TreeNode*> l = cont_tree(s,i-1);
            vector<TreeNode*> r =cont_tree(i+1,e);

            for(int j=0;j<l.size();++j)
            {
                for(int k=0;k<r.size();++k)
                {
                    TreeNode * rt = r[k];
                    TreeNode * nd = new TreeNode(i);
                    nd->right = rt;
                    nd->left = l[j];
                    v.push_back(nd);
                }
            }
        }
        return v;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> v;    
        if(n<1)
            return v ;
        return cont_tree(1,n);
    }
};