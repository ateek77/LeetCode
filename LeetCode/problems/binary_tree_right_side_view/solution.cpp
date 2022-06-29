/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rightTraverse(TreeNode* root,map<int ,int> &map,int level){
        if(!root)   return ;
        rightTraverse(root->left,map,level+1);
        map[level]=root->val;
        rightTraverse(root->right,map,level+1);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> valueMap;
        rightTraverse(root,valueMap,0);
        vector<int> result;
        for(auto it:valueMap){
            result.push_back(it.second);
        }
        return result;
    }
};