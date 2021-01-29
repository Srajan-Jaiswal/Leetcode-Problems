// Runtime: 100 ms, faster than 85.74% of C++ online submissions for Minimum Deletions to Make String Balanced.
// Memory Usage: 21.8 MB, less than 98.88% of C++ online submissions for Minimum Deletions to Make String Balanced.

class Solution {
public:
    int minimumDeletions(string s) {
        if(s.length()==1){
            return 0;
        }
        int cnta=0,cntb=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                cnta++;
            }
            else{
                cntb++;
            }
        }
        //cout<<cnta;
        if(cnta==0 || cntb==0){
            return 0;
        }
        int b_so_far=0;
        int sum =cnta+b_so_far;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                cnta--;
            } 
            else{
                b_so_far++;           
            }
            sum =min(sum,(b_so_far + cnta));
        }
        return sum;
    }
};
