class Solution {
  public:
    int singleNonDuplicate(vector < int > & nums, int s, int e) {
      if (s == e) return nums[s];
      int m = s + (e - s) / 2;
      if (nums[m] == nums[m + 1]) m % 2 ? e = m - 1 : s = m;
      else m % 2 ? s = m + 1 : e = m;
      return singleNonDuplicate(nums, s, e);
    }
  int singleNonDuplicate(vector < int > & nums) {
    return singleNonDuplicate(nums, 0, nums.size() - 1);
  }
};

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans,int i=0;
        if(nums.size()==1) return nums[0];
        while(i<=nums.size()-1){
            if(nums[i] == nums[i+1]) i=i+2;
            else if(nums[i] != nums[i+1]){
                ans= nums[i];
                break;
            }
            else i++;
        }
        return ans;
    }
};
