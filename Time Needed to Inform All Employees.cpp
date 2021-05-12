class Solution {
public:
    vector<int> arr[100001];
    int dfs(vector<int> arr[],int st,vector<int> &informTime){
       int ans=0;
        for(auto n : arr[st]){
              ans =  max(ans,dfs(arr,n,informTime));
        }
        return ans+informTime[st];   
    }   
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> arr[n];
        for(int i=0;i<n;i++){
            if(manager[i]==-1) continue;
            arr[manager[i]].push_back(i);
            //arr[manager[i]].push_back(i);
        }
        return  dfs(arr,headID,informTime);
        //return ans;
    }
};
