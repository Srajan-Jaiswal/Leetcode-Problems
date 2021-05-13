// Runtime: 56 ms, faster than 5.70% of C++ online submissions for Minimum Moves to Equal Array Elements.
// Memory Usage: 28.3 MB, less than 31.88% of C++ online submissions for Minimum Moves to Equal Array Elements.
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        int n = nums[0];
        for(int i=nums.size()-1;i>0;i--){
            cnt+= (nums[i]-n);
        }
      return cnt;
    }
};
