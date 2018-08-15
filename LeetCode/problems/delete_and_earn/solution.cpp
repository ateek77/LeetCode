class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int arr[100001]={0};
        
        for(int i=0;i<nums.size();++i)
            arr[nums[i]]++;
        
        int ex=0,in=arr[0],ex_m=0;
        
        for(int i=0;i<100001;++i)
        {
            ex_m =max(in,ex);
            in = ex + arr[i]*i;
            ex = ex_m;
        }
        return max(ex,in);        
    }
};