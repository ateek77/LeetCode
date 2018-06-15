class Solution {
public:
      int jumpDP(vector<int> arr,int n )
    {
        int DP[n]={0};

        for(int i=n-2;i>=0;--i)
        {
            int mn =INT_MAX;
            if(!arr[i])
                DP[i]=INT_MAX;
            else if(arr[i]==arr[i+1]+1 && i!=n-2)
               DP[i] = DP[i+1];
            else
               DP[i]  =(mn=*min_element(DP+i+1,((i+arr[i]>=n) ? (DP+n):(DP+i+arr[i]+1))))==INT_MAX ? INT_MAX :mn+1;
        }
        return DP[0];
    }
    bool canJump(vector<int>& nums) {
        int mx=INT_MAX;
        mx = jumpDP(nums,nums.size());
        if(mx==INT_MAX)
                return 0;
        return 1;
    }
};