// Runtime: 4 ms, faster than 77.89% of C++ online submissions for Longest Substring with At Least K Repeating Characters.
// Memory Usage: 7.2 MB, less than 38.65% of C++ online submissions for Longest Substring with At Least K Repeating Characters.

class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        if(n==0 || k>n){
            return 0;
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;  
        }
        int j=0;
        while(j<n && mp[s[j]]>=k){
            j++;  
            }
            if(j>=n-1){
                return j; 
            }
        int substring1=longestSubstring(s.substr(0,j),k); 
        while(j<n && mp[s[j]]<k){ 
            j++;
        }
        int substring2;
        if(j<n){ 
             substring2=longestSubstring(s.substr(j),k);
        }else{
             substring2=0;
        }
        return max(substring1,substring2);
    }
};
