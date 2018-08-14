class Solution {
public:
    bool is(char S)
    {
        return !(S=='a'||S=='e'||S=='i'||S=='o'||S=='u');
    }
    string toGoatLatin(string S) {
        stringstream ss(S),ans;
        string a="a";
        int t=0;
        while(ss>>S)
        {
            if(t)
                ans<<" ";
            t=1;
            if(is(tolower(S[0])))
            {
                S+=S[0];
                S.erase(S.begin());
            }
            S+="ma"+a;
            ans<<S;
            a+='a';
        }
        return ans.str();
        
    }
};