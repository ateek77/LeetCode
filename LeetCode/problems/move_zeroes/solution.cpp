bool cmp(int a,int b)
{
    if(a && !b)
        return 1;
    return 0;
}
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i])
                swap(nums[z++],nums[i]);
        }
        while(z<nums.size())
            nums[z++]=0;
    }
};