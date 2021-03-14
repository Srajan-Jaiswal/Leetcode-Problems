class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int es) {
        map<double,pair<int,int>> um;
        vector<double> vec;
        double ans;
        for(int i=0;i<classes.size();i++){
            vector<int> p = classes[i];
            double calc = (double)p[0]/p[1];
            //cout<<calc<<endl;
            vec.push_back(calc);
            um[calc] = {p[0],p[1]}; 
        }
        int cnt = 0;
        sort(vec.begin(),vec.end());        
        for(auto &it : um){
        while(es){
         pair<int,int> p = it.second;
         double calc = p.first/p.second;   
         cnt++;
         while(calc <= vec[cnt] && es>0){
             p.first++;
             p.second++;
             es--;
             calc  =(double) p.first/p.second;
         }
          it.second = {p.first,p.second};
          vec[cnt] = calc;
        }
         double sum = 0;   
        for(int i=0;i<vec.size();i++){
            sum += vec[i];
        }
        ans = sum/classes.size();           
       }
        return ans;
    }
};

