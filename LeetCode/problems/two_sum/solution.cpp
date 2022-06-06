class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        // int st,en;
        // en=nums.size()-1;
        // st=0;
        // while(st<en){
        //     if(nums[en] + nums[st] == target )
        //         return {st,en};
        //     if(nums[en] + nums[st] > target ){
        //         en--;
        //     }else{
        //         st++;
        //     }
        // }
        // return {};
        
//         int n=nums.size();
//         for(int i=0;i<n;++i){
            
//             for(int j=i+1;j<n;++j){
//                 if(target-nums[i]==nums[j])
//                     return {i,j};
//             }
//         }
//         return {};
        
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;++i){
            if(mp.find(target-nums[i])!=mp.end()){
                return {mp[target-nums[i]],i};
            }else
                mp[nums[i]]=i;
        }
        return {};
    }
};