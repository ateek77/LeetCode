class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()<1)
                return 1;
        bool flg[nums.size()+1];
        memset(flg,0,sizeof(flg));
        
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]>=0 && nums[i]<=nums.size())
                flg[nums[i]]=1;
        }
        int i=0;
        for(i=1;i<=nums.size();++i)
            if(!flg[i])
                break;
        return i;
    }
};