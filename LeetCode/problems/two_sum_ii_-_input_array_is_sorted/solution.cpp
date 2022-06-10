class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int i,n=num.size()-1;
        i=0;
        while(i<n){
            if(num[i]+num[n]==tar)
                return {i+1,n+1};
            else if(num[i]+num[n]<tar)
                ++i;
            else
                --n;
        }
        return {0,0};
    }
};