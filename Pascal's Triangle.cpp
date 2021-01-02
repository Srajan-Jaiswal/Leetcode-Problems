// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
// Memory Usage: 7.1 MB, less than 20.26% of C++ online submissions for Pascal's Triangle.

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> generate(int numRows){
        vector<int> prev,curr;
        curr.push_back(1);
        prev.push_back(1);
        prev.push_back(1);
        if(numRows == 0){
           return ans;
        }
        else if(numRows == 1){
            ans.push_back(curr);
            return ans;
        }
        else if(numRows == 2){
            ans.push_back(curr);
            ans.push_back(prev);
            return ans;
        }
        else{
           ans.push_back(curr);
           ans.push_back(prev);
        int i=3;
        while(i<=numRows){
            curr.clear();
            curr.push_back(1);
            for(int j=0;j<prev.size()-1;j++){
                curr.push_back(prev[j]+prev[j+1]);
            }
            curr.push_back(1);
            prev=curr;
            i++;
            ans.push_back(curr);
        }
            return ans;
        }
    }
};
