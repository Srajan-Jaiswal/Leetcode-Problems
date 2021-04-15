// Runtime: 4 ms, faster than 33.69% of C++ online submissions for Maximum Score After Splitting a String.
// Memory Usage: 7.1 MB, less than 11.86% of C++ online submissions for Maximum Score After Splitting a String.
class Solution {
public:
    unordered_map<int,int> um; 
    int maxScore(string s) {
        int k=0,l=s.length(),cnt0=0,cnt1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cnt0++;
                um[i]=cnt0;
            }
            else{
                um[i]=cnt0;
                cnt1++;
            }
        }
        int maxi = INT_MIN;
        while(k<l-1){
            int zeroesK = um[k];
            int onesK = (k+1)-um[k];
            int onesR = cnt1-onesK;
            maxi = max(maxi,(zeroesK+onesR));
            k++;
        }
        return maxi;
    }
};
