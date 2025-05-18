class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; 

        int minPrice = prices[0];     
        int maxProfit = 0;            

        for (int i = 1; i < prices.size(); ++i) {
            
            minPrice = std::min(minPrice, prices[i]);

            
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
}; 
// The above code defines a class Solution with a public method maxProfit that takes a vector of integers prices as input. It calculates the maximum profit that can be achieved by buying and selling stocks on different days. The method initializes minPrice to the first price and maxProfit to 0. It iterates through the prices, updating minPrice to the minimum price seen so far and calculating the potential profit at each step. Finally, it returns the maximum profit found.