// Runtime: 8 ms, faster than 46.75% of C++ online submissions for Best Time to Buy and Sell Stock with Cooldown.
// Memory Usage: 12.1 MB, less than 12.89% of C++ online submissions for Best Time to Buy and Sell Stock with Cooldown.


class Solution {
public:
    unordered_map<string,int> um;
    string str;
 int memo(vector<int> &prices,int idx,int flag){
        if(idx >= prices.size()){
            return 0;
        }
        str = idx+"SrAjAn"+flag; 
        if(um.find(str) != um.end()){
            return um[str];
          
        }
        int ans=0;
        if(flag==0){
           int b = memo(prices,idx+1,1)-prices[idx];
           int n_b =  memo(prices,idx+1,0);
           ans = max(b,n_b); 
        }
        else{
            int s = memo(prices,idx+2,0)+prices[idx];
            int n_s = memo(prices,idx+1,1);
            ans = max(s,n_s);
        }
        um[str]=ans;
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        return memo(prices,0,0);
    }
};
