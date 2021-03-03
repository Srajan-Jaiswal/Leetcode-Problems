class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int idx=0;
        sort(nums.begin(),nums.end());
        for(int i: nums){
            if(i==idx){
                idx++;
                continue;
            }
            else break;
        }
        return  idx;
    }
};
