class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int odd_cnt = 0;
        int tot_res = 0;
        int tmp_res = 0;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) odd_cnt++;
            while (odd_cnt == k) {
                tmp_res++;
                if (nums[j] % 2 == 1) odd_cnt--;
                j++;
            }
            tot_res += tmp_res;
            i++;
    
            while (i < nums.size() && nums[i] % 2 == 0) {
                tot_res += tmp_res;
                i++;
            }
            i--;
            tmp_res = 0;
        }
        
        return tot_res;
    }
};
