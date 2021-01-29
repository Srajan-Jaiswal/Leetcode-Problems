// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Largest Substring Between Two Equal Characters.
// Memory Usage: 6.3 MB, less than 79.93% of C++ online submissions for Largest Substring Between Two Equal Characters.
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = {i,i};
            }
            else{
                pair<int,int> temp = m[s[i]];                 
                m[s[i]] = {temp.first,max(temp.second,i)};
            }
        }
        if(m.size()==s.size()){
            return -1;
        }
        int maxi = INT_MIN;
        for(auto it : m){
            maxi = max(maxi,it.second.second - it.second.first -1);
        }
        return maxi;
    }
};
