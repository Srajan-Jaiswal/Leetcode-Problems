// Runtime: 8 ms, faster than 97.78% of C++ online submissions for Sort Characters By Frequency.
// Memory Usage: 8.4 MB, less than 65.17% of C++ online submissions for Sort Characters By Frequency.
class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    unordered_map<char,int> um;
    priority_queue<pair<int,char>> pq;
    string frequencySort(string s) {
        for(char c:s){
            um[c]++;
        }
        for(auto it:um){
        pq.push(make_pair(it.second,it.first));
        }
        string ans = "";
        while(!pq.empty()){
          pair<int,char> p = pq.top();
          pq.pop();
          while(p.first>0){  
          ans += p.second ;
          p.first--;
          }
        }
        return ans;
    }
};
