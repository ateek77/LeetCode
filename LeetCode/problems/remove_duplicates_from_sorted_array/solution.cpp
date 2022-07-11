class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a,b,n;
        a=0,b=0,n=nums.size();
        
        while(b<n){
            if(nums[a]==nums[b])
                ++b;
            else
                nums[++a]=nums[b];         
        }
        return a+1;
    }
};