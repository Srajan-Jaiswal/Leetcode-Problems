class Solution {
public:
    map<string,int> m;
    set<char> st;
    void subseq(string in, string out)
    {
       if(in.length()==0){
           m[out]++;
           return;
       }
       string op1=out;
       string op2=out;
        
       op2.push_back(in[0]);
       in.erase(in.begin()+0);
        
       subseq(in,op1);
       subseq(in,op2);
        return;
    }
    string smallestSubsequence(string s) {
        string out = "";
        for(int i=0;i<s.length();i++)
        {
            st.insert(s[i]);
        }
        string temp="";
        string ans;
        for(auto it : st)
        {
            temp += it;
        }
        if(temp[0]==temp[temp.length()-1])
        {
            ans = temp[0];
            return ans;
        } 
        subseq(s,out);
        
        for(auto it: m)
        {
            string s1 = it.first;
            if(s1.length()==temp.length()){
            sort(s1.begin(),s1.end());
            if(s1==temp)
            {
               ans= it.first;
                break;
            }
            }
            cout<<it.first<<endl;
        }
        return temp;
    }
};
