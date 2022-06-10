
class Solution {
public:

    struct compe{
        bool operator()(const pair<int,int>  &a,const pair<int,int> &b){
            return a.first>b.first;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int> mp;
        for(auto it :  nums){
            mp[it]++;
        }
        priority_queue<pair<int ,int>,vector<pair<int,int>>,compe> pq;
        
        for(auto it:mp){
            if(pq.size()<k){            
                pq.push(make_pair(it.second,it.first));
            }else if(pq.top().first < it.second ){
                 pq.pop();
                pq.push(make_pair(it.second,it.first));
            }
            
        }
        vector<int> res;
        
        while(!pq.empty()){        
            cout<<pq.top().first<<" "<<pq.top().second<<" \n";
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};