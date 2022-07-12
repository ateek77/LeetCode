class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n<2)
            return n;
        vector<int> store_result(1,0);
        store_result[0]=nums[0];
        int len=1;
        for(int i=1;i<n;++i){
            
            if(store_result[len-1]<nums[i])
            {
                store_result.push_back(nums[i]);
                ++len;
            }else{
                int k=0;
                while(k<store_result.size() && store_result[k]<nums[i])
                    ++k;
                if(k==store_result.size())
                    store_result[k-1] = nums[i];
                else
                    store_result[k] = nums[i];
            }
            // for(auto it:store_result){
            //     cout<<" "<<it<<" ";
            // }
            // cout<<"\n";
        }
        return len;
    }
};

//[0,1,0,3,2,3]
//[1,2,2,3,3,4]
//[3,2,2,1,2,1]