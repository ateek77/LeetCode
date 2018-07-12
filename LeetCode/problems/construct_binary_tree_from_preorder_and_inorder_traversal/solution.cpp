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
     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        m=preorder.size();
        n=inorder.size();
        return buildTree(preorder,0,m-1,inorder,0,n-1);
    }
    TreeNode* buildTree(vector<int>& preorder, int ps,int pe, vector<int>& inorder, int is, int ie){
        if(ps>pe) return nullptr;
        int val = preorder[ps];
        int pos=0;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==val){
                pos=i;
                break;
            }
        }
        TreeNode* root = new TreeNode(val);
        root->left = buildTree(preorder, ps+1, ps+pos-is,inorder, is,pos-1);
        root->right = buildTree(preorder,ps+pos-is+1,pe,inorder, pos+1,ie);
        return root;
    }
    int m,n;
};