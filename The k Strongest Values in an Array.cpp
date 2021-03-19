// Runtime: 204 ms, faster than 78.69% of C++ online submissions for The k Strongest Values in an Array.
// Memory Usage: 98.8 MB, less than 5.11% of C++ online submissions for The k Strongest Values in an Array.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> ans;
    vector<int> getStrongest(vector<int>& arr, int k) {
        priority_queue<pair<int,int>> max_heap; 
        sort(arr.begin(),arr.end());
        int med = arr[(arr.size()-1)/2];
        for(int i=0;i<arr.size();i++){
            max_heap.push(make_pair(abs(arr[i]-med),arr[i]));
        }  
        while(k!=0){
            pair<int,int> p = max_heap.top();
            max_heap.pop();
            ans.push_back(p.second);
            k--;
        }
        return ans;
    }
};
