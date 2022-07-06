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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        if(!root)   return result;
        queue<TreeNode*> node_queue;
        
        node_queue.push(root);
        node_queue.push(NULL);
        result.push_back(vector<int>());
        while(!node_queue.empty()){
            root = node_queue.front(); node_queue.pop();
            if(root){
                result[result.size()-1].push_back(root->val);
                if(root->left)
                    node_queue.push(root->left);
                if(root->right)
                    node_queue.push(root->right);
            }else{
                if(node_queue.size()==0){
                    break;
                }
                node_queue.push(NULL);
                result.push_back(vector<int>());
            }
        }
        return result;
    }
};