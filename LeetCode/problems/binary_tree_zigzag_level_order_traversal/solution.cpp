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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector< vector<int> > vv;
        if(!root)
            return vv;
        stack<TreeNode *> s1,s2;
        s1.push(root);
        bool trn=0;
        TreeNode * node=NULL;
        while(!s1.empty())
        {
            vector<int> v;
            if(trn)
            {
                while(!s1.empty())
                {
                    node = s1.top(); s1.pop();
                    v.push_back(node->val);
                    if(node->right)
                        s2.push(node->right);
                    if(node->left)
                        s2.push(node->left);                   
                }                
            }
            else
            {
                 while(!s1.empty())
                {
                    node = s1.top(); s1.pop();
                    v.push_back(node->val);
                    if(node->left)
                        s2.push(node->left);  
                    if(node->right)
                        s2.push(node->right);
                                     
                }                
            }
            vv.push_back(v);
            trn=1-trn;
            swap(s1,s2);           
        }
        return vv;
    }
};