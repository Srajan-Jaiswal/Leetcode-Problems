// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
// Memory Usage: 6.9 MB, less than 58.02% of C++ online submissions for Letter Combinations of a Phone Number.


class Solution {
    map<char, string> m = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
public:
    void rec(string& digits, int idx, string curr, vector<string>& ans) {
        string val = m[digits[idx]];
        curr.push_back(val[0]);
        for(int i = 1; i <= val.length(); i++) 
        {
            if(idx < digits.size()-1)
            {
                rec(digits, idx+1, curr, ans);
            }
            else
            {
                ans.push_back(curr);
            }
            curr[curr.length()-1] = val[i];
        }
    }
    
     vector<string> letterCombinations(string digits) {
        vector<string> ans;
        rec(digits, 0, "", ans);
        return ans;
    }
    

};
