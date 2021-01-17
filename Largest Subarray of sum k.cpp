class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0,size=0;
        int j=0,sum=0;
        int ans=0;
        while(i<nums.size())
        {
           size+=1; 
           sum += nums[i];
            if(sum < k)
            {
               i++;
            }
            else if(sum == k)
            {
                
                ans += 1;
                sum -= nums[j];
               // size -= 1;
                j++;
                i++;
            }
            else{
               while(sum>k)
               {
                   sum = sum-nums[j];
                   j++;
               } 
                if(sum==k && i!=nums.size()-1){
                    
                    ans+=1;
                }
               i++; 
            }
        }
        return ans;
    }
};
