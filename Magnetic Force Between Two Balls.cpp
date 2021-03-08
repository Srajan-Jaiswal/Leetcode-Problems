// Runtime: 144 ms, faster than 99.76% of C++ online submissions for Magnetic Force Between Two Balls.
// Memory Usage: 58 MB, less than 65.55% of C++ online submissions for Magnetic Force Between Two Balls.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    int maxDistance(vector<int>& pos, int m){
       sort(pos.begin(),pos.end());
        int l = 0,res;
        int h = pos[pos.size()-1];
        while(l<=h){
            int mid = (l+h)/2;
           // cout<<mid<<endl;
            int magnet = 1;
            int last = pos[0];
            for(int i=1;i<pos.size();i++){
                if(pos[i]-last >= mid){
                    magnet++;
                    last = pos[i];
                    if(magnet==m) break;
                }
            }
            if(magnet==m){
               res = mid;
               l = mid+1;   
            }
            else h = mid-1;
        }
        return res;
    }
};
