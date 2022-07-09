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
        
        // stringstream submited code for second time
        if(!root)   return "*";
        string left_tree = serialize(root->left);
        string right_tree = serialize(root->right);
        
        string serialize_string = to_string(root->val) +",";
        serialize_string += left_tree+","+right_tree;
        
        return serialize_string;
    }
    
    int position =0;
    
    TreeNode* dser(string &data){
        if(position >=data.size() )    
            return NULL;
        if(data[position]=='*'){
            position+=2;
            return NULL;
        }
        int pos=position;
        while(pos<data.size() && data[pos]!=',')
            ++pos;
                
        int number = stoi(data.substr(position, pos-position));
        // cout<<position<<" "<<pos<<"\n";
        position=pos+1;
        
        TreeNode *node = new TreeNode(number);
        
        node->left = dser(data);
        node->right = dser(data);
        
        return node;
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
       string res=data;
        return dser(res);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));