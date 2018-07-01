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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > vv;
        if(!root)
            return vv;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int l=0;
        
        vector<int> tmp;
        vv.push_back(tmp);
        while(!q.empty())
        {
            TreeNode *ptr = q.front();
            q.pop();
            
            if(ptr)
            {
                vv[l].push_back(ptr->val);
                if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                    q.push(ptr->right);
            }
            else
            {
                l++;
                if(!q.empty()){
                    q.push(NULL);
                    vector<int> tmp;
                   vv.push_back(tmp);
                }
            }
        }
        return vv;
    }
};