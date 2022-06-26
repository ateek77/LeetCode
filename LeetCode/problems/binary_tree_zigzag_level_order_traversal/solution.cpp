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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> levelQueue; 
        levelQueue.push(root);
        levelQueue.push(NULL);
        vector<TreeNode*> temp;
        bool toggle =1;
        while(!levelQueue.empty()){
            TreeNode* node = levelQueue.front(); levelQueue.pop();
            if(node){
                if(toggle)
                    temp.push_back(node);
                else
                    temp.insert(temp.begin(),node);
                if(node->left)
                    levelQueue.push(node->left);
                if(node->right)
                    levelQueue.push(node->right);                
            }else{
                
                toggle = !toggle;
                
                vector<int> aux;
                for(auto it:temp){
                    aux.push_back(it->val);
                }
                result.push_back(aux);  
                temp.clear();
                if(!levelQueue.size())
                    break;
                levelQueue.push(NULL);
            }
        }
        return result;                
    }
};