class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int st,end,mn,sum,n=nums.size();
        
        st=end=sum=0,mn=INT_MAX;
        
        while(end<n)
        {
            sum+=nums[end];
            while(sum>=s)
            {
                //cout<<sum<<" ";
                int dis = end - st +1 ;
                mn = min(dis , mn);
                sum-=nums[st++];
            }
            end++;
        }
        return mn == INT_MAX ? 0 : mn ;
    }
};