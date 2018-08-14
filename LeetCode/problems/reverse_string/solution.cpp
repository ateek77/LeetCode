class Solution {
public:
    string reverseString(string s) 
    {
        int st=0,e=s.size()-1;
        while(st<e)
        {
            s[st]^=s[e];
            s[e]^=s[st];
            s[st]^=s[e];
            ++st;
            --e;
        }
        return s;
    }
};