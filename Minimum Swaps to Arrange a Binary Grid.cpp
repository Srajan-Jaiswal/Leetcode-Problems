// Runtime: 48 ms, faster than 93.07% of C++ online submissions for Minimum Swaps to Arrange a Binary Grid.
// Memory Usage: 26 MB, less than 36.63% of C++ online submissions for Minimum Swaps to Arrange a Binary Grid.
class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> v1;
        vector<int> v2;
        priority_queue<int> pq;
        for(int i=0;i<grid.size();i++){
            int cnt =0;
            for(int j=grid[0].size()-1;j>=0;j--){
                if(grid[i][j]==0)cnt++;
                else break;
            }
            v1.push_back(cnt);
            v2.push_back(cnt);
            pq.push(i);
        }
        // checking for the case when res is not possible
        sort(v2.begin(), v2.end());
        for(int i=0;i<v2.size();i++){
            if(i>v2[i]) return -1;
        }
        v2.clear();
        int swap=0;
        while(!pq.empty()){
            int t = pq.top();
            pq.pop();
            auto it = v1.begin();
            for(int i=0;i<v1.size();i++){
                if(v1[i]>=t){
                    v1.erase(it+i);
                    break;
                }
                else swap++;
            }
        }
        return swap;
    }
};
