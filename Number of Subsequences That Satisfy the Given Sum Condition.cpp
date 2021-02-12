// Runtime: 136 ms, faster than 78.21% of C++ online submissions for Number of Subsequences That Satisfy the Given Sum Condition.
// Memory Usage: 47.6 MB, less than 94.04% of C++ online submissions for Number of Subsequences That Satisfy the Given Sum Condition.

#define m 1000000007
class Solution {
public:
    int powi(int i , int j){
        if(j==1) return i;
        if(j==0) return 1;
        long res = 1;
        if(j%2==0){
            res = powi(i,j/2);
            res *= res;
            res %= m;
        }
        else{
            res = powi(i,j-1);
            res *= i;
            res %= m;
        }
        return res;
    }
    int numSubseq(vector<int>& nums, int target) {
          sort(nums.begin(),nums.end());
          int start = 0;
          int end = nums.size()-1;
           long  ans=0;
          while(start<=end){
              if(nums[start]+nums[end] <= target){
              //    ans += pow(2,end-start); // this pow  exceed limits 
                    ans += powi(2,end-start);
                    ans %= m;
                  start++;
              }
              else{
                  end--;
              }
          }
        return ans;
    }
};
