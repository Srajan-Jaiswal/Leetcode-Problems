class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int> freq(26,0);
        int i=0;
        int j=0;
        int maxi = 0;
        while(j<s.length()){
            if(freq[0]%2 == 0 && freq[4]%2 == 0 && freq[8]%2 == 0 && freq[14]%2 == 0 && freq[20]%2 == 0){
               if(i==0) maxi = max(maxi,j-i+1);
                else  maxi = max(maxi,j-i);
                
            }
            cout<<i<<"->"<<j<<endl;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' && freq[s[j]-'a']<=2){
              freq[s[j]-'a']++;
              cout<<s[j]<<"->"<<freq[s[j]-'a']<<endl;  
            }
            if(freq[s[j]-'a'] > 2){
                while(j-i+1 > 1){
                    if(s[i] == s[j]){
                        cout<<"munnaji"<<endl;
                        freq[s[i]-'a']--;
                         i++;
                        break;
                    }
                    cout<<"munna"<<endl;
                    freq[s[i]-'a']--;
                    i++;
                }
            }
           
            j++;
        }
        return maxi;
    }
};
