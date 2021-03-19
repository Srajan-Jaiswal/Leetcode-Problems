class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
    int cnt = 1;
    bool iflag = true, dflag = true;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            if(dflag) cnt++;
            iflag = true;
            dflag = false;
        } 
        else if (nums[i] > nums[i + 1]) {
            if(iflag) cnt++;
            dflag = true;
            iflag = false;
        }
    }
    return cnt;
}
};
