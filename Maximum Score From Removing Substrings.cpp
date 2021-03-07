// Runtime: 112 ms, faster than 71.72% of C++ online submissions for Maximum Score From Removing Substrings.
// Memory Usage: 25.8 MB, less than 32.94% of C++ online submissions for Maximum Score From Removing Substrings.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int maximumGain(string s, int x, int y) {
        string temp = "";
        int ans=  0;
        if(x>y){
            stack<char>st;
        for(int i=0;i<s.length();i++)
        {
           if(st.empty()) st.push(s[i]);
           else{
                 if(st.top()=='a' && s[i]=='b')  ans+=x,st.pop();
                 else  st.push(s[i]);
            }
        }
        temp ="";
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        s= temp;
        for(int i=0;i<s.length();i++){
           if(st.empty())  st.push(s[i]);
           else{
                 if(st.top()=='b' && s[i]=='a'){
                    st.pop();
                     ans+=y;
                }
                else{
                    st.push(s[i]);
                }
            }
            }
        temp ="";
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        return ans;
        }
        else{
            stack<char>st;
           for(int i=0;i<s.length();i++){
                if(st.empty())   st.push(s[i]);
                else{
                  if(st.top()=='b' && s[i]=='a')   st.pop(),ans+=y; 
                  else st.push(s[i]);
                }
          } 
        string temp ="";
        while(!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        s = temp;   
        for(int i=0;i<s.length();i++){
           if(st.empty())  st.push(s[i]);
           else{
                 if(st.top()=='a' && s[i]=='b'){
                     ans+=x;
                    st.pop();
                }
               else  st.push(s[i]);
            }
        }
      return ans;
    }
return 0;
    }
};
