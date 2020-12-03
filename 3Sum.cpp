class Solution {
public:
    vector<int> a;
    vector<vector<int>> ans;
    vector<vector<int>> threeSum(vector<int>& nums) {
          if(nums.size()<3){
              return ans;
          }
          sort(nums.begin(),nums.end());
          for(int i = 0; i < nums.size()-2; i++) 
          {
              if(i==0 || i>0 && nums[i]!=nums[i-1]){
                int j=i+1;
                int k=nums.size()-1;
                while(j<k)
                {
                if(nums[j]+nums[k]+nums[i]==0)
                {
                   a.push_back(nums[i]); 
                   a.push_back(nums[j]);
                   a.push_back(nums[k]);
                   ans.push_back(a); 
                   a.clear(); 
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k-1]){
                       k--;
                    }
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]+nums[i] > 0){
                    k--;
                }
                 else{
                    j++;
                }
            }
            }
          }
        return ans;
        }
};
