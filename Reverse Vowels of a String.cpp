// Runtime: 48 ms, faster than 5.92% of C++ online submissions for Reverse Vowels of a String.
// Memory Usage: 11.1 MB, less than 5.81% of C++ online submissions for Reverse Vowels of a String.

class Solution {
public:
    map<int,char> m;
    string reverseVowels(string s) {
        int it = 1;
        for(int i=0;i<s.length();i++)
        {
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
             {
                 m[it] = s[i];
                 it++;
                // cout<<i<<"->"<<s[i]<<endl;
             }
        }
       
        int idx =1;
        for(int i=s.length()-1;i>=0;i--)
        {
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
             {
                // cout<<m[idx];
                 s[i] = m[idx];
                 idx++;
             }
        }
        return s;
    }
};
