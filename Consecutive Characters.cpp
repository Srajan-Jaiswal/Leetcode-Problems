// Runtime: 4 ms, faster than 79.37% of C++ online submissions for Consecutive Characters.
// Memory Usage: 7 MB, less than 51.08% of C++ online submissions for Consecutive Characters.

class Solution {
public:
    int maxPower(string s) {
        int ans= 1;
        int cnt = 1;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == s[i+1]){
                cnt++;
                if (cnt > ans){
                    ans = cnt;
                }
            } else {
                cnt = 1;
            }
        }
        return ans;
    }
};
