// Runtime: 620 ms, faster than 28.24% of C++ online submissions for 4Sum II.
// Memory Usage: 32.6 MB, less than 55.53% of C++ online submissions for 4Sum II.
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        if(A.size()==0 || B.size()==0 || C.size()==0 || D.size()==0)
        {
            return 0;
        }
        
        int count = 0;
        map<int,int> sumAB;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
              sumAB[A[i]+B[j]]++;
            }
        }
         for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
               // cout<<C[i]+D[j]<<endl;
              if(sumAB.find(-C[i]-D[j]) != sumAB.end()){
                 count+= sumAB[-C[i]-D[j]];
                  
              }
            }
        }
        return count;
    }
};
