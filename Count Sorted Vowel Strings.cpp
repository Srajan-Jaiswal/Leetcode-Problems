// Runtime: 312 ms
// Memory Usage: 6 MB
//  Slow solution optimisation  with DP.

class Solution {
    int cnt;
public: 
    void vowel(string& cur, vector<string>& v, int n, int pos){
    
        if(cur.size()==n)
           cnt++;
       for(int i=pos;i<5 && cur.size()<=n;i++){
            cur+=v[i];
            vowel(cur, v, n, i);
            cur.pop_back();
       }
        
    }
public:
    int countVowelStrings(int n) {
        if(n==1)return 5;
        string cur ="";
        cnt=0;
        vector<string> v  = {"a","e","i","o","u"};
        vowel(cur,v, n,0);
       return cnt;
    }
};
