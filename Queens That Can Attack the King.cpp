class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        int i,j;
        j=king[1]-1;
        i=king[0];
        vector<vector<int>> res;
        while(j>=0)
        {
           if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
               break;
           }
            j--;
        }
        j=king[1]+1;
        while(j<8)
        {
             if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            j++;
        }
        i=king[0]-1;
        j=king[1];
        while(i>=0)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i--;
        }
        i=king[0]+1;
        while(i<8)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i++;
        }
        i=king[0]-1;
        j=king[1]-1;
        while(i>=0 && j>=0)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i--;
            j--;
        }
        i=king[0]-1;
        j=king[1]+1;
        while(i>=0 && j<8)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i--;
            j++;
        } 
    
        i=king[0]+1;
        j=king[1]-1;
        while(i<8 && j>=0)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i++;
            j--;
        }
        
        i=king[0]+1;
        j=king[1]+1;
        while(i<8 && j<8)
        {
            if(count(queens.begin(),queens.end(),vector<int> {i,j})==1)
           {
               res.push_back(vector<int>{i,j});
                 break;
           }
            i++;
            j++;
        }
        return res;
    }
};
