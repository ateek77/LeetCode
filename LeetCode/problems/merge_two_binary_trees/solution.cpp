/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int x =[]()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 && !t2)
                return NULL;
        if(t1 && t2)
        {
            t1->val += t2->val;
            t1->left = mergeTrees(t1->left,t2->left);
            t1->right = mergeTrees(t1->right,t2->right);
            return t1;
        }
        if(t1)
            return t1;
                  
        return t2;
    }
};