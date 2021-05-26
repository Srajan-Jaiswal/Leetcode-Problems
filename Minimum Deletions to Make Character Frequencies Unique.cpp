// Runtime: 128 ms, faster than 15.89% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
// Memory Usage: 17.8 MB, less than 8.37% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
class Solution {
public:
    int minDeletions(string s) {
        int res=0;
        map<char,int> um;
        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }
        map<int,vector<char>>st;
        for(auto it : um){
            while(!st[it.second].empty() && it.second!=0){
                it.second--;
                res++;
            }
            st[it.second].push_back(it.first);
        }
        return res;
    }
};
