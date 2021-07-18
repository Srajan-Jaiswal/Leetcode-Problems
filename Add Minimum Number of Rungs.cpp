class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        vector<int> vec;
        int cnt=0;
        vec.push_back(rungs[0]-0);
        for(int i=1;i<rungs.size();i++) vec.push_back(rungs[i]-rungs[i-1]);
        for(int i=0;i<vec.size();i++){
            if(vec[i] > dist){
                double res = (double)vec[i]/dist;
                double rem = ceil(res);
                    cnt+=(rem-1);
            }
        }
        return  cnt;
        
    }
};
