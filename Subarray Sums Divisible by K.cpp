// O(N2) in-efficient approach. 

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int sum;
        int cnt=0,fin=0;
        if(A.size()==1){
            if(abs(A[0])%K==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        for(int i=0;i<A.size()-1;i++)
        {
            sum = A[i];
            fin=abs(sum);
            if(fin % K == 0){
                   cnt+=1;
               }
           for(int j=i+1;j<A.size();j++)
           {
               sum+=A[j];
                fin = abs(sum);
               if(fin % K == 0){
                   cnt+=1;
               }
           }
            fin=0;
            sum=0;
        }
        if(A[A.size()-1]%K==0){
            cnt+=1;
        }
        return cnt;
    }
};
