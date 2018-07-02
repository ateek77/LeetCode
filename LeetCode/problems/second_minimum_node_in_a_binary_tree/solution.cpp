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
    void trav(TreeNode* root,int &m1,int &m2)
    {
        if(!root)
            return ;
        if(root->val < m1 )
        {
            m2=m1;
            m1=root->val;
        }
        else if(root->val>m1 && root->val < m2)
        {
            m2=root->val;
        }
        trav(root->left,m1,m2);
        trav(root->right,m1,m2);            
    }
    int findSecondMinimumValue(TreeNode* root) {
        int m1=INT_MAX,m2=INT_MAX;
        trav(root,m1,m2);
        return m2 ==INT_MAX? -1 : m2 ;
    }
};