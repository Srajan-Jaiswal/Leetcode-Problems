class Solution {
public:
    int secondHighest(string s) {
        set<int> maxi;
        for(int i=0;i<s.length();i++){
            if(s[i]-'0' >= 0  && s[i]-'0'< 10){
                if(s[i] == 0){
                    maxi.insert(0);
                }
                int num = s[i]-'0';
                maxi.insert(num);
            }
        }
        
        if(maxi.size()<2) return -1;
         int ans;
         int cnt = 1;
        for(auto it=maxi.rbegin();it!=maxi.rend();++it){
            if(cnt==2){ 
                ans = *it;
                 break;
            }
            cnt++;
        }
        return ans;
    }
};
