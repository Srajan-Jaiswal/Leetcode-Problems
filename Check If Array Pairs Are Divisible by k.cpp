// Runtime: 180 ms, faster than 97.16% of C++ online submissions for Check If Array Pairs Are Divisible by k.
// Memory Usage: 69.8 MB, less than 50.38% of C++ online submissions for Check If Array Pairs Are Divisible by k.

class Solution {
public:
    bool canArrange(vector<int>& arr, int k){        
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[(arr[i]%k + k) % k]++;
        }
        for(int i=0;i<arr.size();i++){
            if((arr[i]%k+k)%k==0){
                
                if(m[(arr[i]%k+k)%k]%2 != 0){
                    return false;
                }
            }
            else if(m[(arr[i]%k+k)%k] != m[k-(arr[i]%k+k)%k]){
                return false;
            }
        }
        return true;
    }
};
