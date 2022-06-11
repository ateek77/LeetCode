class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int lt[n],rt[n];
        lt[0]=nums[0];
        for(int i=1;i<n;++i){
            lt[i]=lt[i-1]*nums[i];
        }
        rt[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i){
            rt[i]=rt[i+1]*nums[i];
        }
        vector<int> res;
        for(int i=0;i<n;++i){
            if(i && i!=n-1){
                res.push_back(lt[i-1]*rt[i+1]);
            }else if(i==0){
                res.push_back(rt[1]);
            }else if(i==n-1){
                res.push_back(lt[n-2]);
            }
        }
        return res;
        
    }
};