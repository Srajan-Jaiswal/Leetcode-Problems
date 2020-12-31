class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       if(strs.size() == 1)
            return {{strs[0]}};
        
       for(int i=0;i<strs.size();i++)
       {
        vector<int> binary;
           for(int i=0;i<=26;i++)
           {
               binary[i]=0;
           }
           string temp = strs[i];
             for(int j=0;j<temp.length();j++)
             {
                 binary[temp[j]-'a'] = 1;
             }
      vector<string> help;
           help.push_back(temp);
       for(int k=i+1;k<strs.size();k++)
       {    
            string a = strs[k];
            if(a.length() == temp.length())
            {
                for(int j=0;j<=26;j++){
                    if(binary[a[j]-'a']==1){
                        continue;
                    }
                    else{
                        break;
                    }
                }
                help.push_back(a);
            }
       }
       ans.push_back(help);
       } 
        return ans;
    }
};
