// Runtime: 88 ms, faster than 89.71% of C++ online submissions for Rank Transform of an Array.
// Memory Usage: 40.5 MB, less than 50.43% of C++ online submissions for Rank Transform of an Array.
class Solution {
public:
    unordered_map<int,int> um;
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> st ;
        st = arr;
        int cnt=1;
        sort(st.begin(),st.end());
        for(int i=0;i<st.size();i++){   
            if(um.find(st[i]) == um.end()){
                um[st[i]] = cnt;
                cnt++;
            }
        }
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(um[arr[i]]);
        }
        return ans;
    }
};
