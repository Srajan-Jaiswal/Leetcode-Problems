// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Alphabet Board Path.
// Memory Usage: 6.4 MB, less than 34.95% of C++ online submissions for Alphabet Board Path.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<int>> board ={{'a','b','c','d','e'},
                                {'f','g','h','i','j'},
                                {'k','l','m','n','o'},
                                {'p','q','r','s','t'},
                                {'u','v','w','x','y'},
                                {'z'}};
    unordered_map<char,pair<int,int>> um;
    string str="";
    string alphabetBoardPath(string target) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                um[board[i][j]] =  make_pair(i,j);
            }
        }
        bool flag =false;
        pair<int,int> src = {0,0};
        for(int i=0;i<target.size();i++){
            pair<int,int> dest = um[target[i]];
            if(dest.first==5 && dest.second!=src.second){
                dest.first=4;
                flag=true;
            }
            if(dest.first > src.first){
                int diff = dest.first-src.first;
                while(diff){
                    str += 'D';
                    diff--;
                }
            }
           if(dest.first < src.first){
                int diff = src.first-dest.first;
                while(diff){
                    str += 'U';
                    diff--;
                }
            }
            if(dest.second > src.second){
                int diff = dest.second-src.second;
                while(diff){
                    str += 'R';
                    diff--;
                }
               
            }
            if(dest.second < src.second){
                int diff = src.second-dest.second;
                while(diff){
                    str += 'L';
                    diff--;
                }
            }  
            if(flag){
                str+='D';
                flag=false;
            }
            src = um[target[i]];
            str += "!";
        }
        return str;
    }
};
