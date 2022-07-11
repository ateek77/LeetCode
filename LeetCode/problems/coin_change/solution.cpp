static int x=[](){
    std:ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    
    int CE_DP(vector<int> &v ,int amt)
    { 
        int DP[amt+1],n=v.size()-1;
        memset(DP,125,sizeof(DP));
        DP[0]=0;
        for(int i=1;i<=amt;++i)
        { 
            for(int j=n;j>=0;--j){ 
                if(i-v[j]>=0)    
                    DP[i]  =  min(DP[i],DP[i-v[j]]+1);
            } 
        }
        // for(int i=0;i<=amt;++i)
        //     cout<<DP[i]<<" ";
        // cout<<"\n";
        return DP[amt]<=amt?DP[amt]:-1;
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end()); 
        
        return CE_DP(coins,amount);
    }
};