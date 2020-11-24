class Solution {
public:
    int max = INT_MIN;
    int longestMountain(vector<int>& arr) {
         for(int i=1;i<arr.size()-1;i++){
             int ans = 0;
             if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
             {
                 int j=i-1;
                 int k=i+1;
                 while(j>=0 || k<=arr.size()-1)
                 {
                     if(arr[j]>arr[j-1])
                     {
                         ans++;
                         j--;
                     }
                     else if(arr[k]>arr[k+1])
                     {
                         ans++;
                         k++;
                     }
                     else{
                         break;
                     }
                 }
                 if(ans>max){
                 max = ans;
             }
             }
         }
        return max;
    }
};
