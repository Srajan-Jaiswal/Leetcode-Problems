// Runtime: 8 ms, faster than 91.81% of C++ online submissions for Minimum Moves to Equal Array Elements II.
// Memory Usage: 10.8 MB, less than 90.45% of C++ online submissions for Minimum Moves to Equal Array Elements II.
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());    
        int mid = nums.size()/2;
        int cnt=0;
           for(int i=nums.size()-1;i>mid;i--)  cnt += (nums[i]-nums[mid]);
           for(int i=0;i<mid;i++)   cnt+= (nums[mid]-nums[i]);
        return cnt;
    }
};
