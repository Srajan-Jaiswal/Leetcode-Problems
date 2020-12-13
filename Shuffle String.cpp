// Runtime: 12 ms, faster than 68.91% of C++ online submissions for Shuffle String.
// Memory Usage: 15.7 MB, less than 21.96% of C++ online submissions for Shuffle String.
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = "";
        vector<char> mp(256,'a');
        for(int i=0;i<s.size();i++)
        {
            mp[indices[i]]=s[i];
        }
        for(int i=0;i<s.size();i++)
        {
            res+=mp[i];
        }
        return res;
    }
};
