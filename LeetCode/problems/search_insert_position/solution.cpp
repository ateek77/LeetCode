class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
      
        
        int s=0,l=nums.size()-1,mid=0;
        if(nums[l]<tar)
            return l+1;
        else if(nums[0]>tar)
            return 0;
        
        while(s<l)
        {
            mid=s+(l-s)/2;
            if(nums[mid]==tar)
                return mid;
            else if(nums[mid]<tar)
                s=mid+1;
            else
                l=mid-1;                
        }
        
        int ans = (s+l)/2;
        if(nums[ans]<tar)
            return ans+1;
        
        return ans;
    }
};