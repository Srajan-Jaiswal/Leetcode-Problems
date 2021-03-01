// Runtime: 8 ms, faster than 99.75% of C++ online submissions for Reverse Words in a String III.
// Memory Usage: 11.8 MB, less than 37.55% of C++ online submissions for Reverse Words in a String III.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    string reverseWords(string s) {
        s+=" ";
        string temp="", ans ="";
        for(char c : s){
            if(c != ' ') temp += c; 
            else{
            reverse(temp.begin(),temp.end());
                ans+=temp + " ";
                 temp = "";
            }
        }
        ans.pop_back();
        return ans;
    }
};
