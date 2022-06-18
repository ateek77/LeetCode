class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int start,first,last,max_c,n=s.length();
        max_c = first = last = 0;
        start=-1;
        
        vector<int> char_set(256,-1);
        for(int i=0;i<s.length();++i){
            if(char_set[s[i]]>start)
                start = char_set[s[i]];
            char_set[s[i]] = i;
            max_c = max(max_c , i-start);
        }
//         while(last < n){
            
//             if(!char_set[s[last]]){
//                 char_set[s[last]]=1;
//                 ++last;
//             }else{
//                 while(s[first]!=s[last]){
//                     char_set[s[first]]=0;
//                     first++;
//                 }
//                 char_set[s[first]]=0;
//                 first++;
//             }
//             max_c = max(max_c , (last-first));
            
//         }
        return max_c;
    }
};