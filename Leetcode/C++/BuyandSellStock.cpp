class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()){
            return 0;
        } 
        
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price); 
            maxProfit = max(maxProfit, price - minPrice); 
        }
        return maxProfit;
    }
};