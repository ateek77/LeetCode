class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        if(n<1)
            return 0;
        int i,j,mx;
        vector<int> DP(1);
        DP[0]=INT_MIN;
        for(i=0;i<n;++i)
        {
            if(nums[i]>DP[0])
                DP.insert(DP.begin(),nums[i]);
            else
            {
                j=0;
                while(DP[j]>=nums[i])
                    ++j;
                DP[j-1] = nums[i];
            }
            
        } 
        // for(auto it:DP)
        //     cout<<it<<" ";
        // cout<<"\n";
        return DP.size()-1;
    }
};