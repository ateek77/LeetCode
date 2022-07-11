class Solution {
public:
    int strStr(string haystack, string needle) {
        int n,m,a,b;
        
        n = haystack.length();
        m=needle.length();
        if(needle=="")
            return 0;
        a=0,b=0;
        while(a<n){
            int temp =a;
            while(temp<n && b<m && needle[b]==haystack[temp])
                ++b,++temp;
            if(b){
                if(b==m)
                    return a;
                else
                    b=0;
            }
            ++a;            
        }
        return -1;
    }
};