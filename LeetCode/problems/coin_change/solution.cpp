static int x=[](){
    std:ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (coins.size() == 0 || amount == 0)
            return 0;
        int count = amount + 1;
        
        std::sort(coins.begin(), coins.end());
        
        dfs(coins, coins.size()-1, amount, count, 0);
        
        return count == amount + 1 ? -1 : count;
    }
    
    void dfs(const vector<int>& coins, const int& posi, const int& target, int& count, const int& currentCount) {
        if (target < 0 || currentCount + ceil((double) target / coins[posi]) >= count)
            return; // best effort could be
        if (target == 0) {
            count = min(count, currentCount);
            return;
        }
        for (int i = posi; i >=0; --i) {
            dfs(coins, i, target - coins[i], count, currentCount + 1);
        }
    }
};
/*
[3,7,405,436]
8839
*/