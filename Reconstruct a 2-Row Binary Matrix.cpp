// Runtime: 48 ms, faster than 99.73% of C++ online submissions for Reconstruct a 2-Row Binary Matrix.
// Memory Usage: 60.6 MB, less than 64.67% of C++ online submissions for Reconstruct a 2-Row Binary Matrix.

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
       vector<vector<int>> arr(2,vector<int> (colsum.size(),0));  
       for(int i=0;i<colsum.size();i++){
          if((colsum[i] > 0 && upper<=0 && lower<=0) || (colsum[i]==2 && (upper<=0 || lower<=0))){
              arr.clear();
              return arr;
          }
          if(colsum[i]==2 && upper>0 && lower>0){
             arr[0][i] = 1;
             arr[1][i] = 1;
             upper--;
             lower--;
         }
        else if(colsum[i]==1 ){
             if(upper >= lower && upper>0){
                arr[0][i] = 1;
                arr[1][i] = 0;
                upper--; 
             }
             else{
                if(lower>0){ 
                arr[0][i] = 0;
                arr[1][i] = 1;
                lower--;
                }
             }
         }
         else{ 
          arr[0][i]=0;
          arr[1][i]=0;  
         } 
      }
        if(upper>0 || lower>0){
            arr.clear();
            return arr;
        }
        return arr;
    }
};
