// Runtime: 440 ms, faster than 100.00% of C++ online submissions for Evaluate the Bracket Pairs of a String.
// Memory Usage: 139.1 MB, less than 100.00% of C++ online submissions for Evaluate the Bracket Pairs of a String.

class Solution {
public:
    unordered_map<string,string> um;
    string evaluate(string s, vector<vector<string>>& k) {
        for(vector<string> v : k){  
            um[v.front()] = v.back();
        }
        string ans="";
        int i=0;
        bool flag =false;
        while(i<s.length()){
            string temp = "";
            if(s[i]=='('){
                i++;
               while(s[i]!=')'){
               temp += s[i];
               i++;
               }
                cout<<temp<<endl;
                i++;
                flag = true;
            }
           if(flag == true){
               if(um.find(temp) != um.end()){
               ans += um[temp];
               flag = false;
               }
               else{
                   ans +='?';
               }
           }
           if(s[i]=='(' or i==s.length()) continue; 
           ans+=s[i]; 
            i++;
        }
        return ans;
    }
};
