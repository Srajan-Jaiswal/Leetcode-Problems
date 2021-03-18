class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
bool isValid(string s) {
    stack<char>stk;
    for(int i=0;i<s.length();i++){
        if(s[i]!='c') stk.push(s[i]);
        else{
            if(stk.size() >= 2){
                char c1=stk.top();
                stk.pop();
                char c2=stk.top();
                stk.pop();
                if(c1=='b' and c2=='a') continue;
                else return false;       
            }
            else return false;
        }   
    }
    if(stk.empty()) return true;
    return false;
}
};
