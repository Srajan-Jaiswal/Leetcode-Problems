class Solution {
    
    void recur(int open,int closed,int &n,string str,vector<string>&ans){
        if(open==n && closed==n) {
            ans.push_back(str);
            return;
        }
        if(open<n){
            recur(open+1,closed,n,str+"(",ans);
        }
        if(closed<n && open>closed){
            recur(open,closed+1,n,str+")",ans);
        }
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        recur(0,0,n,"",ans);
        return ans;
    }
};
