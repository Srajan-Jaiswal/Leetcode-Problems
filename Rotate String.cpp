// Runtime: 4 ms, faster than 17.77% of C++ online submissions for Rotate String.
// Memory Usage: 6.5 MB, less than 58.93% of C++ online submissions for Rotate String.


class Solution {
public:
    bool rotateString(string A, string B) {
        string C = B + B;
        if(A.length() == 0 && B.length()==0){
            return true;
        }
        if(strstr(C.c_str(),A.c_str()) && C.length()>=A.length() && B.length()==A.length())
         {
               return true;
         }
        else{
            return false;
        }
    }
};
