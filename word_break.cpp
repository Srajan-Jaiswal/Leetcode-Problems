class Solution {
public:
        string temp="";
    bool wordBreak(string s, vector<string>& wordDict) {
        int cnt=0;
        map<string,int> m;
        for(int i=0;i<wordDict.size();i++)
        {
            m[wordDict[i]]++; 
        }
        for(int i=0;i<s.length();i++)
        {
            temp += s[i];
            if(m.find(temp) != m.end())    
            {
              cout<<temp<<endl;  
              cnt=i;
              temp.clear();
            }
            else {
            if(i==s.length()-1){
                 return false;
            }
            }
        }
        if(cnt==s.length()-1){
            return true;
        }
        else{
            return  false;
        }
    } 
};
