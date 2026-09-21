class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int pairs=0;
        sort(intervals.begin(), intervals.end());

        for(int i=0; i<intervals.size()-1; i++){
            for(int j=i+1; j<intervals.size(); j++){
                if(intervals[i][1] >= intervals[j][0]){
                    pairs++;
                }
            }
        }
        return pairs; 
    }
};