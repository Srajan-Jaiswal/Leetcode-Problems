class Solution {
public:
    set<string> st;
    set<char> helper;
    int res = INT_MIN;
    void substr(string s,int idx)
    {
        if(idx >= s.length())
        {
            return;
        }
        string temp = "";
        for(int i=idx;i<s.length();i++)
        { 
           temp += s[i];
          if(st.find(temp) == st.end())
          {
              st.insert(temp);
              substr(s,i+1);
          }
        }
    }
    int maxPower(string s) {
         substr(s,0);
        for(auto it: st)
        {
            string ans = it;
            for(int k=0;k<ans.length();k++)
            {
                helper.insert(ans[k]);
            }
            int n = ans.length();
            //cout <<n<<endl;
            if(helper.size()==1 && n>res)
            {
              res = n;
            }
            helper.clear();
        }
        return res;
    }
};
