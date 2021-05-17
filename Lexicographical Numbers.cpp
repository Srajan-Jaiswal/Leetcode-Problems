// Runtime: 16 ms, faster than 34.11% of C++ online submissions for Lexicographical Numbers.
// Memory Usage: 12.1 MB, less than 25.31% of C++ online submissions for Lexicographical Numbers.

class Solution {
public:
    vector<int> ans;
    void DFS(int idx, int n){
        if(idx>n) return;
        ans.push_back(idx);
        for(int i=0;i<10;i++){
            DFS(idx*10+i,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<10;i++){
            DFS(i,n); 
        }
        return ans;
    }
};
