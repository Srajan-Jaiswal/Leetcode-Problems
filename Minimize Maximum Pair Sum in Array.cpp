class Solution {
public:
    int minPairSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int j=nums.size()-1,res=0;
     for(int i=0;i<nums.size();i++){
         if(i<j){
         res = max(res,nums[i]+nums[j]);
         j--;
         }
     }
       return res; 
    }
};
