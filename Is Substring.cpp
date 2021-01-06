// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Is Subsequence.
// Memory Usage: 6.7 MB, less than 26.91% of C++ online submissions for Is Subsequence.

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0;
        
        if(s==t){
            return true;
        }
        while(i<t.size())
        {
            if(t[i]==s[j]){
                j++;
            }
            if(j==s.size()){
               return true;
            }
            if(i==t.size()-1){
                return false; 
            } 
            i++;
        }
        return false;
    }
};
