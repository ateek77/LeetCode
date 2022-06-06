class Solution {
public:
    bool isAnagram(string s, string t) {
      
        if(s.length() !=t.length()) return 0;
        
        int n=s.length();
        map<char,int> mp;
        
        for(int i=0;i<n;++i){
            mp[s[i]] = mp[s[i]]+1;
            // cout<<  mp[s[i]] <<" ";
        }
        for(int i=0;i<n;++i){
            mp[t[i]] = mp[t[i]]-1;
            // cout<<  mp[t[i]] <<" ";
        }
        for(auto it:mp){
            // cout<<it.first<<" "<<it.second<<"\n ";
            if(it.second)  return 0;
        }
        return 1;
    }
};