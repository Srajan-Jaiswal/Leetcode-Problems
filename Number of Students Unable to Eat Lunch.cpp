class Solution {
public:
    queue<int> q;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for(int i=0;i<sandwiches.size();i++){
            q.push(sandwiches[i]);
        }
        int j=0,cnt=0;
        while(!q.empty() && j<students.size()){
            int f = q.front();
            q.pop();
            
            if(f == students[j]){
                j++;
                cnt++;
            }
            else{
                q.push(f);
                cnt++;
            }
        }
        int ans = q.size();
        return ans;
    }
};
