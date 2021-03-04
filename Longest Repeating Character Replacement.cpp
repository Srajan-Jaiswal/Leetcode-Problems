class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    unordered_map<int,int> um;
    int ans=0 , maxi=0;
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        while(j<s.length()){
            um[s[j]]++;
            maxi =  max(maxi,um[s[j]]);
            while((j-i+1)-maxi > k){
                um[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
