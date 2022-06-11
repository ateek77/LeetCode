class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int mx_c,n=s.length();
        mx_c=0;
        
        for(int i=0;i<n;++i){            
            set<char> st;
            int cnt,j=i;
            cnt=0;
            while(j<n && st.find(s[j])==st.end()){
                cnt++;
                st.insert(s[j++]);                
            }
            mx_c=max(mx_c,cnt);            
        }
        return mx_c;
    }
};