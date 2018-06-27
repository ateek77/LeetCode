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
    void trav(TreeNode *root,string &str)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            
          //  str+="(";
            str+=to_string(root->val);
           // str+=")";
            return ;
        }
        if(root->left && root->right)
        { 
            str+=to_string(root->val);
            str+="(";
            trav(root->left,str);  
            
            str+=")("; 
            trav(root->right,str);  
            str+=")"; 
            return ;
        }
        str+=to_string(root->val);
        if(!root->left)
        {
            str+="()";
        }
        else
        {  
            str+="(";
            trav(root->left,str);  
            str+=")";
        }
        if(root->right)
         { 
            str+="(";
            trav(root->right,str);
            str+=")";
        }            
    }
    string tree2str(TreeNode* t) {
        string str="";
        trav(t,str);
        return str;
    }
};