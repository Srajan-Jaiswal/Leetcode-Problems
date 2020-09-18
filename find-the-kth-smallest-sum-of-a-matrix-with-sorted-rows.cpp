Runtime: 120 ms, faster than 83.02% of C++ online submissions for Find the Kth Smallest Sum of a Matrix With Sorted Rows.
Memory Usage: 27.2 MB, less than 59.03% of C++ online submissions for Find the Kth Smallest Sum of a Matrix With Sorted Rows.


class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        set<pair<int,vector<int>>> s;
        pair<int,vector<int>> p;
        for(int i=0;i<mat.size();i++)
        {
          p.first+=mat[i][0];
          p.second.push_back(0); // 0th row is inserted in pair.second.vector  
        }      
        s.insert(p);
        if(k==1)
        {
          return p.first;
        }
        while(k>1)
        {
            auto i = s.begin(); 
            pair<int,vector<int>> p1=(*i);
            s.erase(i);
            for(int i=0;i<mat.size();i++)
            {
              if(p1.second[i]+1 < mat[i].size())
              {
                  p1.first += mat[i][p1.second[i]+1] - mat[i][p1.second[i]];
                  p1.second[i]++;
                  s.insert(p1);
                  p1.second[i]--;
                  p1.first += mat[i][p1.second[i]] - mat[i][p1.second[i]+1];
              }
              else
                  break;
            }
            k--;   
        }
        auto i1 = s.begin();
        int ans = (*i1).first;
            return ans;
    }
};
