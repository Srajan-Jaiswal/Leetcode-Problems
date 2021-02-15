class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int n = s.size();
        int ans = 0;
        int i=0, j=0, sum=0, mx=INT_MIN;
        
        while(j < n) {
            if(s[i] == s[j]) {
                sum += cost[j];
                mx = max(mx, cost[j]);
                j++;
            }
            else {
                if(j-i > 1) {
                    ans += sum - mx;
                }
                i = j;
                sum = 0;
                mx = INT_MIN;
            }
        }
        if(j-i > 1) {
            ans += sum - mx;
        }
        return ans;
    }
};
















