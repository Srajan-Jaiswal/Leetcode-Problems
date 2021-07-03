class Solution {
public:
  vector<int> pancakeSort(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size(), l=n-1, num=1;
        while(num<=n)
        {
            if(l!=find(arr.begin(),arr.end(),num)-arr.begin())
            {
                int f=find(arr.begin(),arr.end(),num)-arr.begin();
                ans.push_back(f+1);
                ans.push_back(l+1);
                reverse(arr.begin(),arr.begin()+f+1);
                reverse(arr.begin(),arr.begin()+l+1);
            }
            l--;num++;
        }
        ans.push_back(n);
        return ans;
    }
};
