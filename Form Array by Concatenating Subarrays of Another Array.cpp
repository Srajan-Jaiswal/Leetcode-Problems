class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums){        
      int last = 0; 
      for(int i = 0; i < groups.size(); i++){
            int l = -1, r = 0, j = last;
            while (j < nums.size() && r < groups[i].size()){
                if(nums[j] == groups[i][r]){
                    if (r == 0) l = j; 
                    r++;
                    j++;
                    continue; 
                }
                if(l > -1 && nums[j] != groups[i][r]){
                    j = l + 1;
                    l = -1;
                    r = 0;
                    continue;
                }
                j++;
            }
            if (l == -1 || (j == nums.size() && r < groups[i].size())){
                return false; 
            }
            last = l + groups[i].size();
      }
        return true;
    }
};
