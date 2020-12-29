// Runtime: 4 ms, faster than 80.59% of C++ online submissions for Partition Labels.
// Memory Usage: 6.9 MB, less than 98.24% of C++ online submissions for Partition Labels.

class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> hash;
        int arr[26]={0};
        for(int i=0;i<S.size();i++){
            arr[S[i]-'a']=i;
        }
        int j=0;
        int new_init = arr[S[0]-'a'];
        for(int i=0;i<S.size();i++){
            if(arr[S[i]-'a'] > new_init){   
                new_init = arr[S[i]-'a'];
                j++; 
            }
            else{
                j++;
            }
            if(i==new_init){
                hash.push_back(j);
                j=0;
            }
        }
        return hash;
    }
};
