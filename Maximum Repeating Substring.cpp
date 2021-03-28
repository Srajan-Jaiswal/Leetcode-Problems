// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Repeating Substring.
// Memory Usage: 6.2 MB, less than 23.43% of C++ online submissions for Maximum Repeating Substring.// 
class Solutio// n {
public:
    int maxRepeating(string seq, string word) {
        int cnt =0;
        bool flag =true;
        string t ="";
        while(flag){
           t += word;
           int f = seq.find(t);
           if(f != string::npos) cnt++; 
           else break;
        }
        return cnt;
    }
};
