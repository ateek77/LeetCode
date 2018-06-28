/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int ___ =[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return NULL;
}();
class Solution {
public:
    TreeNode* fun(vector<int>& nums,int l,int r)
    {
        if(l>r)
            return NULL;
        int mid=(l+r+1)/2;
        TreeNode * root =new TreeNode(nums[mid]);
        if(l==r)
            return root;
        root->left = fun(nums,l,mid-1);
        root->right =fun(nums,mid+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return fun(nums,0,nums.size()-1);
    }
};