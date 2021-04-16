// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Robot Bounded In Circle.
// Memory Usage: 6.1 MB, less than 66.01% of C++ online submissions for Robot Bounded In Circle.
class Solution {
public:
    bool isRobotBounded(string s) {
        int x=0,y=0,i=0;
        vector<vector<int>> di_vec={{0,1},{1,0},{0,-1},{-1,0}};
        for(int j=0;j<s.length;j++){
            if(s[j]=='G'){  
                    x+=di_vec[i][0]; 
                    y+=di_vec[i][1]; 
            }
                if(s[j]=='L') i=(i+3)%4;
                if(s[j]=='R') i=(i+1)%4;
            }
        if((x==0 && y==0) || i != 0) return true;
        return false;
    }
};
