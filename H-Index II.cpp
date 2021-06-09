
class Solution {
public:
    int hIndex(vector<int>& c) {
        int i=0,j=c.size()-1;
        int n=j+1;
        int res=0;
        while(i<=j){
            int m=(i+j)/2;
            if(c[m]>=(n-m)){
                j=m-1;
                res=max(res,n-m);
            }
            else i=m+1;
        }

        return res;
    }
};
