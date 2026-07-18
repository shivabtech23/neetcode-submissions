class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int res = 0;
    int minPrice = prices[0];

    for (int i = 0; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;
        res = max(res, profit);
        minPrice = min(minPrice, prices[i]);
    }
    return res;
}
};
