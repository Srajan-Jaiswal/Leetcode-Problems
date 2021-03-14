class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {    
        int p=-1,curr=-1;
        int cnt = 0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt>2)return false;
                p = curr;
                curr = i;
            }
        }
        if(cnt==0) return true;
        if(cnt==1) return false;
        return (cnt == 2 && s1[p] == s2[curr] && s1[curr] == s2[p]); 
        
    }
};
