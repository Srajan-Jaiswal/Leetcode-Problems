// Runtime: 68 ms, faster than 86.91% of C++ online submissions for Boats to Save People.
// Memory Usage: 42 MB, less than 40.66% of C++ online submissions for Boats to Save People.
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
        int start=0,end=people.size()-1,cnt = 0;
        while(start <= end){
        if(people[start]==limit) cnt+=1 , start++;
        if(people[start]+people[end]<=limit) start++, end--, cnt++;
        else  end--,cnt++;
        }
        return cnt;
    }
};
