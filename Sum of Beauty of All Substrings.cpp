class Solution {
    public: Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    unordered_map < char,
    int > um;
    int beautySum(string s) {
        string temp = "";
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            temp += s[i];
            um[s[i]]++;
            for (int j = i + 1; j < s.length(); j++) {
                int maxi = INT_MIN, mini = INT_MAX;
                temp += s[j];
                um[s[j]]++;
                if (um.size() >= 2) {
                    for (auto it: um) {
                        maxi = max(maxi, it.second);
                        mini = min(mini, it.second);
                    }
                    ans += (maxi - mini);
                }
            }
            temp = "";
            um.clear();
        }
        return ans;
    }
};
