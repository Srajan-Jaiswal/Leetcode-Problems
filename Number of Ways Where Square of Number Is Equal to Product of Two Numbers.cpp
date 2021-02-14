// Runtime: 152 ms, faster than 52.14% of C++ online submissions for Number of Ways Where Square of Number Is Equal to Product of Two Numbers.
// Memory Usage: 34.8 MB, less than 26.07% of C++ online submissions for Number of Ways Where Square of Number Is Equal to Product of Two Numbers.

#define li long long int 
class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    unordered_map<li ,li> um1;
    unordered_map<li ,li > um2;
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                um1[(li)nums1[i]*(li)nums1[j]]++;
            }
        }
        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                um2[(li)nums2[i]*(li)nums2[j]]++;
            }
        }
        long long res = 0;
        for(int i=0;i<nums1.size();i++){
           li  sq = (li)nums1[i]*(li)nums1[i]; 
            if(um2.find(sq) != um2.end()){
                res+=um2[sq];
            }
            }
        for(int i=0;i<nums2.size();i++){
            li sq = (li)nums2[i]*(li)nums2[i]; 
            if(um1.find(sq) != um1.end()){
                res+=um1[sq];
            }
            }
    return res;    
    }
};
