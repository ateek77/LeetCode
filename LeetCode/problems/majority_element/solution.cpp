class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cnt=1,maj_ind=0;
        for(int i=1;i<arr.size();++i)
        {
            if(arr[maj_ind]==arr[i])
                cnt++;
            else
                cnt--;
            if(cnt<0)
                cnt=1,maj_ind=i;
        }
        return arr[maj_ind];
    }
};