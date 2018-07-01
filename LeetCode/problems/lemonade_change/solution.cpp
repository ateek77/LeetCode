static int __ =[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool lemonadeChange(vector<int>& v) {
        int sum=0,o=0,t=0,k=0;
        for(int i=0;i<v.size();++i)
        {         
            if(sum<v[i]-5 || (v[i] >5 && !o))
                return 0;  
            
            if(v[i]==10)
                --o;
            else if(v[i]==20)
            {
                if(!t && o<3)
                    return 0;
                else if(t)
                    --t,--o;
                else 
                    o-=3;
            }
            if(v[i]==5)
                ++o;
            else if(v[i]==10)
                ++t;
            else
                ++k; 
            
            sum+=5;
        }
        return 1;
    }
};