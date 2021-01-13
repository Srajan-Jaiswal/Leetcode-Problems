// Runtime: 64 ms, faster than 98.64% of C++ online submissions for Subarray Sums Divisible by K.
// Memory Usage: 31.7 MB, less than 67.25% of C++ online submissions for Subarray Sums Divisible by K.

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int cnt=0,sum=0,rem,rep;
        unordered_map<int,int> m;
        m[0]++; 
        for(int i=0;i<A.size();i++)
        {
            sum += A[i];
            rem = sum%K;
            if(rem < 0){
                rem += K;
            }
            if(m.find(rem) != m.end()){
               rep = m[rem];  
               cnt+= rep;
            }
            m[rem]++;
         } 
        /*for(auto it : m)
        {
            cout<<it.first<<"-->"<<it.second<<endl;
        }*/
        return cnt;
    }
};

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
