// Runtime: 32 ms, faster than 56.61% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 8.9 MB, less than 36.29% of C++ online submissions for Longest Substring Without Repeating Characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i=0, j=0,ans=0;
      unordered_map<char,int>m;
     while(j<s.length()){
       m[s[j]]++;
        if(m.size()==j-i+1){ // this condition takes care of maps has single freq value
         ans=max(ans,j-i+1);
         j++;
       }
       else{
         while(m.size() < j-i+1){ 
            m[s[i]]--;
            if(m[s[i]]==0){
             m.erase(s[i]);
            }
             i++;
         }
         j++;
       }
     }
       return ans;
     }
};
