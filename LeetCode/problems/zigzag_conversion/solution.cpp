class Solution {
public:
    string convert(string s, int n) {
        if(n==1)
            return s;
        
        string str[n],ans="";
        int i=0,t=0;
        while(s[i])
        {
            if(!t){
                while(t<n && s[i])
                {
                    str[t]+=s[i];
                    ++i;++t;
                }
                --i;--t;
            }
            else
            {
                str[t]+=s[i];
            }
            --t;
            ++i;
        }
        for(int i=0;i<n;++i)
            ans +=str[i];
        
        return ans;
    }
};