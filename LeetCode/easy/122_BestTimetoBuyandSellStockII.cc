class Solution {                        
public:                                 
    int maxProfit(vector<int>& prices) {
        int buy_price, yester_price, profit = 0, size = prices.size();
        if (size == 0) return 0;
        buy_price = yester_price = prices[0];
        for (int i = 1; i < size; ++i) {
            if (prices[i] < yester_price) {
                profit += yester_price - buy_price;
                buy_price = prices[i];  
            }                           
            yester_price = prices[i];   
        }                               
        profit += yester_price - buy_price;
        return profit;                  
    }                                   
};                                      
