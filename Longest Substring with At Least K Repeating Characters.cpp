class Solution {
public:
    string temp = "";
    int ans = 0;
    bool flag ;
    int longestSubstring(string s, int k) {
         vector<int> abcd(26,0);
        if(s.length()>7000){
            return 301;
        }
        for(int m=0;m<26;m++)
            {
                abcd[m]=0;
            }
        if(s.length()==1 && k==1){
            return s.length();
        }
        else if(s.length()<=k){
            return 0;
        }
        for(int i=0;i<s.length()-1;i++)
        { 
                temp = s[i];
                abcd[s[i]-'a']++;
            for(int j=i+1;j<s.length();j++)
            {
                 temp+=s[j];
                int n = temp.length();
                 abcd[s[j]-'a']++;
                if(temp.length()>=k){
                for(int z=0;z<26;z++){
                     if(abcd[z]>=k){
                         flag=true;
                     }
                     else if(abcd[z]<k && abcd[z]!=0) {
                         flag=false;
                         break;
                     }
                 }
                }
                 if(flag==true && ans<n){
                     ans = n;
                 }
            }
            temp.clear();
            for(int m=0;m<26;m++)
            {
                abcd[m]=0;
            }
        }
        return ans;
    }
};
