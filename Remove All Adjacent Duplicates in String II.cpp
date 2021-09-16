class Solution {
public:
   string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(auto ch: s){
            if(st.size()>0 && st.top().first == ch) st.top().second++;
            else st.push({ch, 1});
            if(st.top().second == k)  st.pop();
        }
        string res = "";
        while(!st.empty()){
            while(st.top().second--) {
                res.push_back(st.top().first);
            } 
                st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
