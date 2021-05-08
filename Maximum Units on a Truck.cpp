bool compare(vector<int> a, vector<int> b)
{
    return a[1]>b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), compare);
        
        int maxUnits=0;
        
        for(auto box:boxTypes)
        {
            if(truckSize<box[0])
            {
                return maxUnits + truckSize * box[1];
            }
            maxUnits += box[0]*box[1];
            truckSize -= box[0];
        }
        
        return maxUnits;
        
    }
};
