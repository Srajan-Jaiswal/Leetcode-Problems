// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Gray Code.
// Memory Usage: 11.7 MB, less than 79.28% of C++ online submissions for Gray Code.
class Solution {
public:
   vector<int> grayCode(int n) {
       vector<int> vec;
    for (int i = 0; i < (1 << n); i++) { 
        int val = (i ^ (i >> 1));
        vec.push_back(val); 
    }
       return vec;
}
};
