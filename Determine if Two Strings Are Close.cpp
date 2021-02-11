// Runtime: 80 ms, faster than 64.08% of C++ online submissions for Determine if Two Strings Are Close.
// Memory Usage: 20.5 MB, less than 68.38% of C++ online submissions for Determine if Two Strings Are Close.
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
           return false;
        }
        vector<int> freqa(26,0);
        vector<int> freqb(26,0);
        for(int i=0;i<word1.length();i++){
            freqa[word1[i]-'a']++;
            freqb[word2[i]-'a']++;
        }
        int m=0;
        for(int i=0;i<freqa.size();i++){
            if((freqa[i]>0 && freqb[i]==0) || (freqb[i]>0 && freqa[i]==0)){
                return false;
            }
            if(freqa[i]==freqb[i]){
                m++;
                if(m==freqa.size()) return  true;
            }
        }
        sort(freqa.begin(),freqa.end());
        sort(freqb.begin(),freqb.end());
        int cnta=0,cntb=0;
        for(int i=0;i<freqa.size();i++){
            if(freqa[i]>0) cnta++;
            if(freqb[i]>0) cntb++;
        }
        if(cnta==1) return false;
        if(freqa==freqb) return true;  
        return false ;
    }
};
