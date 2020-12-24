int max1 = 100000;
int minOperations(vector<int> arr, int threshold, int d) {
    vector<int> vec[max1];
  for(int i=0;i<arr.size();i++)
  {
      
      vec[arr[i]].push_back(0);
  }
  for(int i=0;i<arr.size();i++)
  {    int cnt=0;
      while(arr[i]>0)
      {
          arr[i]/=d;
          cnt++;
          vec[arr[i]].push_back(cnt);
      }
  }
  int ans = INT_MAX;
  for(int i=0;i<max1;i++)
  {
      if(vec[i].size()>=threshold){
          int flag = 0;
          sort(vec[i].begin(),vec[i].end());
          for(int k=0;k<vec[i].size();k++)
          {
              cout<<vec[i][k]<<" ";
          }
          for(int j=0;j<threshold;j++)
          {
              flag  += vec[i][j];
          }
          ans = min(ans,flag);
      }
  }
  return ans;
  }
