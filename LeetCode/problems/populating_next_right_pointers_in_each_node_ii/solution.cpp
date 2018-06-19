/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root)
                return ;
        queue<TreeLinkNode *> q;
        q.push(root);
        q.push(NULL);
        TreeLinkNode *pre=NULL;
        
        while(!q.empty())
        {
            TreeLinkNode *nd=q.front();q.pop();
            if(!nd)
            {
                pre=NULL;
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                if(!pre)
                    pre=nd;
                else{
                    pre->next=nd;
                    pre=pre->next;}
                if(nd->left)
                    q.push(nd->left);
                if(nd->right)
                    q.push(nd->right);
            }
        }
        
    }
};