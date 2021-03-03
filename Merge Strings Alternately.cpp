class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = max(word1.length(),word2.length()) , rem;
        int n1 = min(word1.length(),word2.length());
        string str = "",s = "";
        for(int i=0;i<n1;i++){
            str += word1[i];
            str += word2[i];
        }
        if(word1.length()==n){
             rem = n - word2.length();
             s = word1.substr(n-rem,n);
        }
        else  {
            rem = n - word1.length();
            s = word2.substr(n-rem,n);
        }
        return str+s;
    }
};
