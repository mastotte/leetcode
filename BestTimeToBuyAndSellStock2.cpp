class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // check for invalid array size
        if(prices.size() <= 1){
            return 0;
        }
        int profit = 0;
        int buy_price = 0;
        int sell_price = 0;
        bool bought = false;
        for(int i = 0; i < prices.size()-1; i++){
            // cash out
            if(prices[i] > buy_price && bought){
                bought = false;
                profit += prices[i] - buy_price;
            }
            // buy in
            if(prices[i] < prices[i+1]){
                bought = true;
                buy_price = prices[i];
            }
        }
        if(bought) profit += prices[prices.size()-1] - buy_price;
        return profit;
    }
};