class Solution {
public:
    int myAtoi(string str) {
        int i=0,sgn=1,flg=0;
        long long num=0;
        while(str[i]==' ')
            ++i;
        if(str[i]=='-' || str[i]=='+')
        {
            str[i]=='-'?(sgn=-1):(sgn=1);
            ++i;
        }
       
        while(i<str.size())
        {
            if(str[i]<='9' && str[i]>='0')
                num=num*10+str[i]-'0';
            else
                break;
            ++i;
            if(num>INT_MAX)
                flg=1;
        }
        if(num>INT_MAX ||  flg)
            return sgn<0?INT_MIN:INT_MAX;
        return sgn*num;
            
    }
};