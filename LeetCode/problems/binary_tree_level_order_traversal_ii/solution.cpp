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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int > > vv;
        if(!root)
            return vv;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        TreeNode *node =NULL;
        vector<int> *v=new vector<int>;
        while(!q.empty())
        {
            node=q.front() ; q.pop();
            if(!node)
            {
                vv.push_back(*v);
                v =new vector<int>;
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                v->push_back(node->val);
                if(node->left)
                        q.push(node->left);
                if(node->right)
                        q.push(node->right);
            }
        }
        reverse(vv.begin(),vv.end());
        return vv;
    }
};