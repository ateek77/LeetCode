class Solution {
public:
    void find(vector<int> num ,vector<vector<int>> &v,vector<int> vv,int n)
    {
        if(n<0){
            //vv.push_back(num[n]);
            v.push_back(vv);
            return ;
        }
        
        find(num,v,vv,n-1);
        vv.push_back(num[n]);
        find(num,v,vv,n-1);
        
            
//         while(n>=0)
//         {
//             vv.push_back(num[n]);
//             v.push_back(vv);
//             find(num,v,vv,n-1);
//             vv.erase(vv.end()-1);            
//             n--;
//         }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
     //   reverse(nums.begin(),nums.end());
        vector<vector<int> > v;
        vector<int> vv;
        find(nums,v,vv,n-1);
        return v;
    }
};