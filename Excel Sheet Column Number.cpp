class Solution {
public:
   
    int titleToNumber(string s) {
         int n=0;
        for(auto i: s){
            n = (n*26) + (int)(i-'A' + 1);
        }
        return n;
    }
};
