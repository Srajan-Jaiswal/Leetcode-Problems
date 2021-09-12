class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        vector<long int> suff(n);
        suff[n-1] = shifts[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1] + shifts[i];
        }
        for(int i=0;i<n;i++){
           s[i] = (((s[i]-'a') + suff[i])%26)+'a'; 
        } 
        return s;
     }
};
