class Solution {
  public:
  vector < string > vec;
  vector < string > temp;
  vector < string > printVertically(string s) {
    string str = "";
    int maxi = INT_MIN;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] != ' ') str += s[i];
      if (s[i] == ' ' || i == s.length() - 1) {
        int n = str.length();
        maxi = max(maxi, n);
        vec.push_back(str);
        str = "";
      }
    }
    for (int i = 0; i < maxi; i++) {
      string res = "";
      for (int j = 0; j < vec.size(); j++) {
        string ans = vec[j];
        if (i >= ans.length()) {
          res += " ";
          continue;
        }
        res += ans[i];
      }
      int rem = res.size() - 1;
      while (rem >= 0) {
        if (res[rem] == ' ') {
          res.pop_back();
          rem--;
          continue;
        } else break;
      }
      temp.push_back(res);
    }
    return temp;
  }
};
