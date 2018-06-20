/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int __initialSetup = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
();

class BSTIterator {
public:
    vector<int> v;
    vector<int> :: iterator it;
    
    void trav(TreeNode * root,vector<int> &v)
    {
        if(!root)
             return ;
        trav(root->left,v);
        v.push_back(root->val);
        trav(root->right,v);
    }
    BSTIterator(TreeNode *root) {
        trav(root,v);
        it = v.begin();
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(it!=v.end())
            return 1;
        return 0;
    }

    /** @return the next smallest number */
    int next() {
        int val  = *it;
        ++it;
        return val;        
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */