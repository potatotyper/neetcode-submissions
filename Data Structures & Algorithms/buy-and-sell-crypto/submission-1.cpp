class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell= 1;
        int profit = 0;
        while(sell < prices.size()) {
            int pb = prices[buy];
            int ps = prices[sell];
            int curprof = ps - pb;
            if (curprof > 0) {
                profit = max(profit, curprof);
            } else {
                buy = sell;
            }
            ++sell;
        }
        return profit;
    }
};
