class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
   vector<int> arr[201];  
   void dfs(int idx,vector<bool> &vis){
       vis[idx] = true;
       for(auto it : arr[idx]){
           if(!vis[it]){
               dfs(it,vis);
           }
       } 
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        for(int i=0;i<isConnected.size();i++){
            vector<int> temp = isConnected[i];
            for(int j=0;j<temp.size();j++){
                if(temp[j]==1){
                    arr[i+1].push_back(j+1);
                } 
            }  
        }
        int cnt=0;
        vector<bool> vis(isConnected.size(),false);
        for(int i=1;i<=isConnected.size();i++){
            if(vis[i]==false){
                cnt++;
                dfs(i,vis);
            }
        }
        return cnt;
    }
};
