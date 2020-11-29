Runtime: 4 ms, faster than 75.69% of C++ online submissions for First Missing Positive.
Memory Usage: 10.6 MB, less than 8.86% of C++ online submissions for First Missing Positive.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int st;
        int ans;
        int s[100001];
        for(int i=0;i<100001;i++)
        {
          s[i]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i] == 0)
          {
              continue;
          }
          else if(nums[i]>0){
          st = nums[i];
          s[st]  = 0;  
          }
          else{
              continue;
          }  
         }
      for(int i=1;i<100001;i++)
      {
          if(s[i] != 0){
              ans = i;
              break;
          }
      }
        return ans;
    }
};
