class Solution {
  public:
    vector < int > check_sig_zeroes(vector < int > & A) {
      if (A[0] == 0) {
        int i = 0, j = A.size() - 1;
        while (i <= j && A[i] == 0) {
          i++;
        }
        A.erase(A.begin(), A.begin() + (i));
      }
      return A;
    }
  vector < int > plusOne(vector < int > & A) {
    int n = A.size();
    if (A[n - 1] < 9) {
      A[n - 1] += 1;
    } else {
      int i = 0, j = n - 1;
      while (j >= 0 && A[j] == 9) {
        A[j] = 0;
        j--;
      }
      vector < int > ans;
      if (j < 0) {
        ans.push_back(1);
        ans.insert(ans.end(), A.begin(), A.end());
        return ans;
      } else {
        A[j] += 1;
      }
    }
    return check_sig_zeroes(A);
  }

};
