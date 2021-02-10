class Solution {
public:
    bool checkP(string str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool checkPalindromeFormation(string a, string b) {
        if (a.length() == 1){
            return true;
        }
        bool ab = true, ba = true;
        int i = 0, j = a.length() - 1;
        while (i < j) {
            if (a[i] != b[j]) {
                ab = checkP(b.substr(i,a.length()-i*2)) || checkP(a.substr(i,a.length()-i*2));
                break;
            }
            i++;
            j--;
        }
        i = 0, j = a.length() - 1;
        while (i < j) {
            if (b[i] != a[j]) {
                ba = checkP(a.substr(i,a.length()-i*2)) || checkP(b.substr(i,a.length()-i*2));
                break;
            }
            i++;
            j--;
        }
        return ab||ba;
    }
};
