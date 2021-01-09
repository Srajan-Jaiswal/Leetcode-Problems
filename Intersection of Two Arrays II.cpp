// Runtime: 12 ms, faster than 52.85% of C++ online submissions for Intersection of Two Arrays II.
// Memory Usage: 11.3 MB, less than 18.73% of C++ online submissions for Intersection of Two Arrays II.

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> vec;
        for(int i=0;i<nums1.size();++i)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();++i)
        {
            if(m[nums2[i]]>0){
                vec.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        /*for(auto it: m)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }*/
        return vec;
    }
};
