//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
//Memory Usage: 6.6 MB, less than 47.27% of C++ online submissions for Split a String in Balanced Strings.

class Solution {
public:
    int ans=0;
    int cnt=0;
    int balancedStringSplit(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                cnt--;
            }
            if(s[i]=='L'){
                cnt++;
            }
            if(cnt==0){
                ans++;  
            }
        }
      return ans;
    }
};
