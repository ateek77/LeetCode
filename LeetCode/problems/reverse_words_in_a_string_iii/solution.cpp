class Solution {
public:
    string reverseWords(string s) {
        stringstream ans,ss(s);
        int t=0;
        while(ss>>s)
        {
            if(t){ans<<" ";}
            reverse(s.begin(),s.end());
            ans<<s;
            t=1;
        }
        return ans.str();
    }
};