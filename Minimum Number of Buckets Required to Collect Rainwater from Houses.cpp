class Solution {
public:
   int minimumBuckets(string s) {
        int n = s.length();
        int res = 0;
        
        for(int i = 1; i < n-1; i++) {
            if(s[i] == '.' and s[i-1] == 'H' and s[i+1] == 'H') {
                res++;
                s[i-1] = s[i+1] = 'F';
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(i != n-1 and s[i] == '.' and s[i+1] == 'H') {
                res++;
                s[i+1] = 'F';
            }
            else if(i != 0 and s[i] == '.' and s[i-1] == 'H') {
                res++;
                s[i-1] = 'F';
            }
        }
        
        for(int i = 0; i < n; i++) if(s[i] == 'H') res = -1; 
        return res;
    }
};
