#include <iostream>
#include <limits.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){
            return 0;
        }
        vector<int>::iterator i;

        int min_price = INT_MAX;
        int max_price = INT_MIN;
        int latest_min = INT_MAX;
        int latest_max = INT_MIN;
        int max_profit = 0;

        for(i = prices.begin(); i != prices.end(); i++){
            if(*i < latest_min){
                latest_min = *i;
                latest_max = -999;
            }else if(*i > latest_max){
                latest_max = *i;
                if(latest_max - latest_min > max_profit){
                    min_price = latest_min;
                    max_price = latest_max;
                    max_profit = latest_max - latest_min;
                }
            }
        }
        return max_profit;
    }
};