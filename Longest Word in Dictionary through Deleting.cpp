class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string res = "";
        int maxi = INT_MIN;
        for(string str : dictionary){
            int  ist = 0 , jst=str.length()-1;
            int  i=0, j=s.length()-1;
            int cnt =0;
            string ans1 = "", ans2 = "" , ans=""; 
                while(i<=j && ist<=jst){
                if(s[i]==str[ist]){
                  ist++;
                  cnt++;
                  ans1+=s[i];
                    cout<<ans1<<endl;
                }
                 if(s[j]==str[jst]){
                    jst--;
                    cnt++;
                    ans2+=s[j];
                    cout<<ans2<<endl;
                }
                i++;
                j--;
            }
            reverse(ans2.begin(),ans2.end());
            ans=ans1+ans2;
            if(cnt>maxi){
            maxi = max(maxi,cnt);
            res = ans; 
            }
            }
        return res;
    }
};
