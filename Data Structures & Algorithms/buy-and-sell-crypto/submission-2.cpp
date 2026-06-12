class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0], sum = 0;
        for (int i=0;i<n;i++){
            int cost = prices[i]-mini;
            mini = min(prices[i],mini);
            sum = max(sum, cost);
        }return sum;
    }
};