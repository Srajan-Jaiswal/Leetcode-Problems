class Solution {
public:
int search(vector<int>& nums, int target) {
int mid,start,end;
start = 0;
end = nums.size() -1;
while(start<=end)
{
mid = (start + (end-start))-1 / 2;
if(nums[mid] == target)
{
return mid;
}
else if(nums[start] <= nums[mid])
{
if(nums[start]<=target && target<nums[mid])
end = mid-1;
else
start = mid+1;
}
else
{
if(nums[mid]<target && target<=nums[end])
start = mid+1;
else
end = mid-1;

    }
    }
    return -1;    
}
};
