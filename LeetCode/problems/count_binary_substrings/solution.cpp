
class Solution {
public:
   int countBinarySubstrings(string s) {
        int pre=0,crnt=1,ans=0;
        
        for(int i=1;i<s.size();++i)
        {
            if(s[i-1]!=s[i])
            {
                ans+=min(pre,crnt);
                pre = crnt ;
                crnt =1;
            }
            else{
                crnt++;
            }
        } 
        return ans+min(pre,crnt);
    } 
    /* 
    int countBinarySubstrings(String s) {
        int ans = 0, prev = 0, cur = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i-1) != s.charAt(i)) {
                ans += Math.min(prev, cur);
                prev = cur;
                cur = 1;
            } else {
                cur++;
            }
        }
        return ans + Math.min(prev, cur);
    }
    */
};