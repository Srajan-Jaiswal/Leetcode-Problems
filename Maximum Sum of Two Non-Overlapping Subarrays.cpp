class Solution {
public:
    unordered_map<int,int> um;
    unordered_map<int,int> mu;
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        for(int i=0;i<A.size()-1;i++){
            int sum = 0;
            for(int j=i;j<A.size()-1;j++){
                int len = j-i+1; 
                sum+=A[j];
                if(um.find(len) != um.end()){
                    if(um[len]<sum){
                        mu[len]=um[len];   
                        um[len]=sum;
                    }
                }
                else um[len]=sum;
            }
        }
        for(auto it: um){
            cout<<it.first<<"->"<<it.second<<endl;
        }
         cout<<um[L]<<um[M]<<endl;
        for(auto it: mu){
            cout<<it.first<<"->"<<it.second<<endl;
        }

        return (um[M]+um[L]);
    }
};
