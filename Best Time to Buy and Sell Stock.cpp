// Runtime: 112 ms, faster than 29.33% of C++ online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 93.3 MB, less than 26.73% of C++ online submissions for Best Time to Buy and Sell Stock.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(mini > prices[i])
            {
                mini = prices[i]; // minimum so far
            }
            else if(prices[i]-mini > maxi)
            {
                maxi = prices[i]-mini;
            }
        }
        return maxi;
    }
};
