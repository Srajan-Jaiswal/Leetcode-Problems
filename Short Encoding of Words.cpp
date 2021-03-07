class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> st;
        for (string str: words) {
            st.insert(str);
        }
        for (string str: words) {
            for (int i = 1; i < str.length(); i++) {
                st.erase(str.substr(i));
            }
        }
        int res = 0;
        for (string str: st) {
            res += str.length() + 1;
        }
        return res;
    }
};
