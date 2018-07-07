class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(),in,ex,c_ex;        
        if(n<1)
            return 0;
        in=nums[0];
        ex=c_ex=0;
        
        for(int i=1;i<n;++i)
        {
            c_ex = max(in,ex);
            in = ex+nums[i];
            ex=c_ex;
        }
        return max(in,ex);
    }
};