class Solution {
public:
    int orc(string str,char ch)
    {
        int cnt=0;
        for(int i=0;i<str.length();++i)
            if(str[i]==ch)
                ++cnt;
        return cnt;
    }
    int numJewelsInStones(string J, string S) {
        int cnt=0;
        for(int i=0;i<J.length();++i)
        {
            cnt+=orc(S,J[i]);
        }
        return cnt;
    }
};