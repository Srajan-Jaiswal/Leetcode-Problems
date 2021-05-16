//  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rabbits in Forest.
//  Memory Usage: 8.6 MB, less than 60.98% of C++ online submissions for Rabbits in Forest.
class Solution {
public:
    unordered_map<int,int> um;
    int res=0;
    int numRabbits(vector<int>& ans) {
        for(int i=0;i<ans.size();i++) um[ans[i]]++;
        ans.clear();
        for(auto it : um)  ans.push_back(it.first);
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                res+=um[0];
                continue;
            }
            if(um[ans[i]] > ans[i]+1){
              int div = um[ans[i]]/(ans[i]+1);
              int rem = um[ans[i]]%(ans[i]+1);
                if(div==0)  res+=(ans[i]+1)*2;
                if(rem>0) res+= (ans[i]+1)*(div+1);
                else  res+=(ans[i]+1)*div;
            }
            else res+=ans[i]+1;
        }
        return res;
    }
};
