class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> ans;
    unordered_map<int,vector<int>> um;
    vector<int> dailyTemperatures(vector<int>& T){
        for(int i=0;i<T.size();i++){
            um[T[i]].push_back(i); 
        }
        for(int i=0;i<T.size()-1;i++){
            bool flag =true;
            int mini = INT_MAX;
            for(int j=T[i]+1;j<=100;j++){
                if(um.find(j) != um.end()){
                    for(int k=0;k<um[j].size();k++){
                    if(um[j][k]>i){ 
                      mini = min(mini,(um[j][k]-i));
                      flag=false;
                       break; 
                       }
                    }  
                }
            }
            if(flag) ans.push_back(0);
            else ans.push_back(mini);
        }
        ans.push_back(0);
        return ans;
    }
};
