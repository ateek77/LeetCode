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
    void traversal(TreeNode* root,int indRow,int indCol,map<pair<int,int>,multiset<int>> &data){
        if(!root)   return ;
        
        data[ make_pair(indRow,indCol)].insert(root->val);
        traversal(root->left,indRow+1,indCol-1,data);
        traversal(root->right,indRow+1,indCol+1,data);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>, multiset<int> > data;
        
        traversal(root,0,0,data);
        
        map<int ,vector<int>> temp_result;
        for(auto it:data){
            for(auto itt:it.second) 
                temp_result[it.first.second].push_back(itt);                  
        }
        vector<vector<int>> result;
        for(auto it :temp_result){
            result.push_back(it.second);
        }
        return result;        
    }
};