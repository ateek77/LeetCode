class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0,len=0,n=nums.size();
        if(nums.size()<=2)
                return nums.size();
        for(int i=0;i<nums.size();++i)
        {
            if(len<2 || nums[i]>nums[len-2])
                nums[len++] = nums[i];                
        }
        return len;
    }
};