class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int> mp;
        for(auto it :  nums){
            mp[it]++;
        }
        multimap<int ,int> mmp;
        
        for(auto it:mp){
            mmp.insert({it.second,it.first});
        }
        vector<int> res;
        
        for(auto it=mmp.rbegin();it!=mmp.rend() && k--;++it){
            res.push_back(it->second);
            
        }
        return res;
    }
};