class Solution {
public:
      Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int numberOfSubstrings(string s) {
        int cnta=0,cntb=0,cntc=0;
        int sw = 0,ew = 0;
        int ans = 0; 
        while(sw < s.length()){
            while(ew<s.length() && (cnta==0 || cntb==0 || cntc==0)){
            if(s[ew]=='a')cnta++;
            if(s[ew]=='b')cntb++;
            if(s[ew]=='c')cntc++;    
                ew++;
            }
           if(cnta>0 && cntb>0 && cntc>0){
                ans += (s.length()-ew+1);
            }
            if(s[sw]=='a')cnta--;
            if(s[sw]=='b')cntb--;
            if(s[sw]=='c')cntc--;
            sw++;
        }
        return ans;
    }
};
