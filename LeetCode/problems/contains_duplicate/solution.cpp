class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> st;
        for(int i=0;i<n;++i){
            if(st[nums[i]]){
                return 1;
            }
            st[nums[i]]=1;
        }
        return 0;
    }
};