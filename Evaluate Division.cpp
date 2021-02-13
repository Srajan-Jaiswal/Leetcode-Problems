// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Evaluate Division.
// Memory Usage: 8.1 MB, less than 87.55% of C++ online submissions for Evaluate Division.

class Solution {
public:
    unordered_map<string, vector<pair<string, double>>> adjlist;
    unordered_set<string> vis;
    double dfs(string start, string end) {
        if (start == end){
            return 1;
        }
        vis.insert(start);
        if (adjlist.find(start) != adjlist.end()) {
            for(auto v: adjlist[start]) {
                if (vis.find(v.first) == vis.end()) {
                    double ans = dfs(v.first, end) * v.second;
                    if (ans > 0){
                        return ans;
                    }
                }
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {        
        for(int i = 0; i < equations.size(); i++) {
            string num = equations[i][0], den = equations[i][1];
            adjlist[num].push_back(make_pair(den, values[i]) );
            adjlist[den].push_back(make_pair(num, 1.0/values[i]));            
        }    
        vector<double> vec;
        for(auto q: queries) {
            string num = q[0], den = q[1];
            if (num == den) {
                if (adjlist.find(num) == adjlist.end())
                    vec.push_back(-1);
                else
                    vec.push_back(1);
            } else {
                double ans = dfs( num, den);
                vec.push_back(ans);
                vis.clear();
            }
        }
        return vec;
    }
};
