class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if (prices.empty()) {
        return 0;
    }

    int min_price = prices[0]; // Initialize the minimum price to the first day's price
    int max_profit = 0; // Initialize the maximum profit to 0

    for (int price : prices) {
        if (price < min_price) {
            min_price = price; // Update the minimum price if we find a lower price
        } else {
            // Calculate the potential profit if we sell at the current price
            int potential_profit = price - min_price;
            max_profit = std::max(max_profit, potential_profit); // Update max profit if potential profit is greater
        }
    }

    return max_profit;  
    }
};