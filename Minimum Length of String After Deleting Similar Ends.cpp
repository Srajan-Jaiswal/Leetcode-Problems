class Solution {
public:
    int minimumLength(string s) {
         int i=0,j=s.length()-1;
         int ans  = INT_MAX; 
         while(i<j){
             if(s[i] == s[j]){
                 char ch = s[i];
                 while(s[i]==ch && i<=j) i++;
                 while(s[j]==ch && j>=i) j--;
                 ans = j-i+1;
                 continue;
             }
             else break;
         }
         if(ans<0) return 0;
         if(ans == INT_MAX) return s.length();
         return ans;
    }
};
