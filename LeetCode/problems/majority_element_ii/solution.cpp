class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for(int i=0;i<n;++i)
            mp[nums[i]]++;
        
        vector<int> v;
        for(int i=0;i<n;++i)
            if(mp[nums[i]]>(n/3) && find(v.begin(),v.end(),nums[i])==v.end()) 
                v.push_back(nums[i]);
        return v;
    }
};