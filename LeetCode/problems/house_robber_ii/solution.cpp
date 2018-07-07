class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),sum1=0,in,ex,c_ex;
        if(n<1)
            return 0;
        in = nums[0];
        ex = c_ex = 0 ;
        for(int i=1;i<n-1;++i)
        {
            c_ex = max(in,ex);
            in = ex+nums[i];
            ex=c_ex;
        }
        sum1=max(in,ex);
        if(n==1)
            return sum1;
        in = nums[1];
        ex=c_ex = 0; 
        for(int i=2;i<n;++i)
        {
            c_ex= max(in,ex);
            in = ex+nums[i];
            ex=c_ex;
        }
        return max(sum1,max(in ,ex));
    }
};