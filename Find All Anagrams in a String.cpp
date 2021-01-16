// Runtime: 116 ms, faster than 17.59% of C++ online submissions for Find All Anagrams in a String.
// Memory Usage: 16.4 MB, less than 6.47% of C++ online submissions for Find All Anagrams in a String.

class Solution {
public:
   map<char,int> m;
    vector<int> vec;
    vector<int> findAnagrams(string s, string p) {
      int i=0;
      int j=0;
       for(int k=0;k<p.length();k++)
       {
            m[p[k]]++;
       }
        while(i<s.length())
        {
          //cout<<s[i]<<endl;      
                m[s[i]]--;
                if(m[s[i]]==0){
                   m.erase(s[i]);
            }
             /*for(auto it : m)
                 {
                     cout<<it.first<<"->"<<it.second<<endl;
                 }*/
            if(i-j+1< p.length())
            {
                i++;
            }
            else if(i-j+1 == p.length())
            {
                if(m.size()==0){
                   // cout<<"HUA PRINT?"<<endl;
                    vec.push_back(j);
                }
                    m[s[j]]++;
                    if(m[s[j]]==0)
                    {
                        m.erase(s[j]);
                    }
                    i++;
                    j++;
            }
            
        }
        return vec;
    }
};
