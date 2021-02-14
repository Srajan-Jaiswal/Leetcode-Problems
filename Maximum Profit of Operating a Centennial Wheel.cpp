// Runtime: 92 ms, faster than 99.20% of C++ online submissions for Maximum Profit of Operating a Centennial Wheel.
// Memory Usage: 81.5 MB, less than 60.00% of C++ online submissions for Maximum Profit of Operating a Centennial Wheel.


class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) 
	{
		if(boardingCost * 4 < runningCost)
			return -1;

    	long long int res = -1, max_profit = 0, curr_profit = 0;
    	for(int i = 0; i < customers.size(); i++)
    	{
    		if(i > 0)
    			customers[i] += max(0, customers[i - 1] - 4);
    		
    		int boarding = min(4, customers[i]);
    		
    		int profit = boarding * boardingCost - runningCost;
    		curr_profit += profit;
    		if(curr_profit > max_profit)
    		{
    			max_profit = curr_profit;
    			res = i + 1;
    		}
    	}

    	
    	customers.back() -= 4;

    	if(customers.back() > 0)
    		curr_profit += (boardingCost * (customers.back() / 4) * 4) - (customers.back() / 4) * runningCost;

    	if(curr_profit > max_profit)
    		res = customers.size() + customers.back() / 4;

    	if((customers.back() % 4 * boardingCost) > runningCost)
    		res = customers.size() + customers.back() / 4 + 1; 

    	return res;
    }
};
