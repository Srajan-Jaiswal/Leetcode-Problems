// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Duplicate Letters.
// Memory Usage: 6.5 MB, less than 76.24% of C++ online submissions for Remove Duplicate Letters.

class Solution {
public:
    string smallestSubsequence(string s) {
          string ans;
    unordered_map<char, int> m;

 for(int i=0;i<s.length();i++)
     m[s[i]]++;
 
 if(ans.length()==m.size())
     return ans;
 
 for(int i=0;i<s.length();i++){
     
     while(ans.length() > 0 && ans.back()>s[i] && m[ans.back()]>0 && ans.find(s[i])==-1)
         ans.pop_back();
         
     
     if(ans.find(s[i])==-1)
         ans.push_back(s[i]);
     
     m[s[i]]--;
 }    
 return ans;
    }
};
