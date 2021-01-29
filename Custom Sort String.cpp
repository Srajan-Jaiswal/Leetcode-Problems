// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Custom Sort String.
// Memory Usage: 6.2 MB, less than 85.83% of C++ online submissions for Custom Sort String.

class Solution {
public:
    string customSortString(string S, string T) {
        string ans = "";
        map<char, int> m;
        set<char>s;
        for(auto it : S){
            s.insert(it);
        }
        for(auto it : T){
            m[it]++;
        }
        for(int i = 0; i < S.length(); i++) {
            if(m[S[i]]){
                for(int j = 0; j < m[S[i]]; j++){
                    ans += S[i];
                }
            }
        }
        for(auto it : m) {
            if(s.find(it.first) == s.end()){
                for(int i = 0; i < it.second; i++){
                    ans += it.first;
                }
            }
        }
        return ans;
    }
};
