// Runtime: 8 ms, faster than 91.00% of C++ online submissions for Intersection of Two Arrays.
// Memory Usage: 10.5 MB, less than 89.64% of C++ online submissions for Intersection of Two Arrays.

class Solution {
public:
    unordered_map<int,int> v;
    unordered_set<int> s;
    vector<int> vec;
     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size()==0 || nums2.size()==0)
    {
       return vec;
    }  
    for(int i=0;i<nums1.size();i++)   
      {
         v[nums1[i]]++;
      }
      for(int i=0;i<nums2.size();i++)
      {
         if(v.find(nums2[i]) != v.end())
         {
             s.insert(nums2[i]);
         }
      }
        for(auto it: s)
        {
           vec.push_back(it);
        }
        return vec;
    }
};
