class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        bool flag;
        bool ans=true;
        for(int i=left;i<=right;i++){
             flag = false;
            for(vector<int> vc : ranges){
                if(i>=vc[0] && i<=vc[1]){
                    flag=true;
                    break;
                }
            }
            if(flag) ans=true;
            else{ 
                ans=false;
                break;
            }
        }
        if(ans) return true;
        else return false;
    }
};
