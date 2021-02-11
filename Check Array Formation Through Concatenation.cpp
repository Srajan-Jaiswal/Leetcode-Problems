// Runtime: 4 ms, faster than 94.49% of C++ online submissions for Check Array Formation Through Concatenation.
// Memory Usage: 10.7 MB, less than 50.48% of C++ online submissions for Check Array Formation Through Concatenation.

class Solution {
  public:
    bool canFormArray(vector<int> & arr, vector < vector<int> > & pieces) {
      map < int, int > um;
      int n = arr.size();
      for (int i = 0; i < arr.size(); i++) {
        um[arr[i]] = i + 1;
      }
      for (vector<int> it : pieces) {
        int i = um[it[0]];
        if (i == 0){
          return false;
        }
        for (int j: it) {
          if (j != arr[i - 1]){
            return false;
          }
          i++;
        }
      }
      return true;
    }
};
