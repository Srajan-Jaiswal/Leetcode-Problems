// Runtime: 12 ms, faster than 100.00% of C++ online submissions for Construct K Palindrome Strings.
// Memory Usage: 11.8 MB, less than 89.65% of C++ online submissions for Construct K Palindrome Strings.
class Solution {
public:
    Solution(){ 
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    bool canConstruct(string s, int k) {
         vector<int> vec(26,0);
        if(s.length()<k) return  false;
        for(char c : s) vec[c-'a']++;
        int odds = 0;
        for(int i : vec) if(i%2 == 1) odds += 1; 
       return !(odds>k);
    }
};
