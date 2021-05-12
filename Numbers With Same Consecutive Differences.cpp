// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Numbers With Same Consecutive Differences.
// Memory Usage: 8.7 MB, less than 29.38% of C++ online submissions for Numbers With Same Consecutive Differences.

class Solution {
    public:
    vector<int> result;
    void dfs(int num, int N, int K){
        if(N == 0){
            result.push_back(num);
            return;
        }
        int last_digit = num%10;
        if(last_digit >= K){
            dfs(num*10 + last_digit - K, N-1, K);
        }
        if(K > 0 && last_digit + K < 10){
            dfs(num*10 + last_digit + K, N-1, K);
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        if(N == 1) result.push_back(0);
        for(int i = 1; i < 10; i++){
            dfs(i, N-1, K);
        }
        return result;
    }
};
