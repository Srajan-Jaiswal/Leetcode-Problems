class Solution {
public:
        int maxProduct(vector<int> &nums) {

        int max_prod = nums[0];
        int min_prod = nums[0];
        int max_so_far = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            
            if(nums[i] < 0) {
                int temp = max_prod;
                max_prod = max(min_prod * nums[i], nums[i]);
                min_prod = min(temp * nums[i], nums[i]);
            }
            else if(nums[i] > 0) {
                max_prod = max(max_prod * nums[i], nums[i]);
                min_prod = min(min_prod * nums[i], nums[i]);
            }
            else {
                max_prod = nums[i];
                min_prod = nums[i];
            }
            
            if(max_prod > max_so_far) {
                max_so_far = max_prod;
            }
            
        }
        
        return max_so_far;
    }
};
