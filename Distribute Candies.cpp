class Solution {
public:
    set<int> s;
    int distributeCandies(vector<int>& candyType) {
        for(int i : candyType) s.insert(i);
        int allowed = candyType.size()/2;
        if(allowed > s.size()) return s.size();
        else return allowed;
    }
};
