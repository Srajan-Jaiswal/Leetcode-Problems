class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
         int ans;
        for(int i=0;i<chalk.size();i++){
            sum += chalk[i];
        }
        long long div = k/sum;
        long long rem = k%sum;
        if(div>0){
            for(int i=0;i<chalk.size();i++){
                rem -= chalk[i];
                if(rem < 0){
                    ans= i;
                    break;
                }
            }
        }
        else{
         for(int i=0;i<chalk.size();i++){
                k -= chalk[i];
                if(k < 0){
                  ans = i;
                  break; 
                }
            }
        }
        return ans;
        
    }
};
