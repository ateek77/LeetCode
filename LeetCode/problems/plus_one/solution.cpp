class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int sum=0,n=dig.size(),cry=0;
        
        sum= dig[n-1] + 1;
        if(sum==10)
        {
            cry=1;
            dig[n-1]=0;
        }
        else
        {
            dig[n-1]++;
            return dig;
        }
        n-=2;
        while(cry)
        {
            if(n>=0 && dig[n]+cry>9)
            {
                cry=1;
                dig[n]=0;
            }
            else 
            {
                if(n==-1)
                    dig.insert(dig.begin(),1);
                else
                    dig[n]++;
                return dig;
            }
            --n;
        }
        
    }
};