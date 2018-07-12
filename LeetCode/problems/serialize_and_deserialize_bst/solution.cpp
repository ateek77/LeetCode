/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)
            return "-99";
        string str = to_string(root->val) +" ";
        str+= serialize(root->left ) +" ";
        str+= serialize(root->right ) +" ";
        return str;            
    }
    TreeNode *con(stringstream &ss)
    {
        int val;
        ss>>val;
        if(val==-99)
            return NULL;
        TreeNode *nd  = new TreeNode(val);
        nd->left =con(ss);
        nd->right = con(ss);
        return nd;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        //cout<<data<<" ";
        stringstream ss(data);
        return con(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));