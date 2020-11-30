// Runtime: 4 ms, faster than 88.12% of C++ online submissions for Next Permutation.
// Memory Usage: 12.6 MB, less than 7.91% of C++ online submissions for Next Permutation.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx1=0,idx2=0;
        bool flag=0;
       for(int i = nums.size() - 1; i > 0; i--)
       {
             if(nums[i] > nums[i-1])
            {
                idx1 = i;
                flag = 1;
                break;
            }                     
        
       }
        if(flag == 1){
            int n = nums.size()-1;
            while(n>=0)
            {
                if(nums[n] > nums[idx1-1])
                {
                    idx2 = n;
                    break;
                }
                  n--;
            }
            swap(nums[idx1-1],nums[idx2]);
           reverse(nums.begin()+idx1,nums.end());
        }
        else{
            sort(nums.begin(),nums.end());
        }
    }
};
