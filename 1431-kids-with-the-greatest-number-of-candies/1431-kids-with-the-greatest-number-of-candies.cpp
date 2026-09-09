class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <int> v;
        int l = candies.size();

        vector <bool> rv;

        for(int i=0; i<l; i++){
            v.push_back(candies[i]);
        }

        //s.sort();
        sort(v.begin(), v.end(), greater<int>());

        int mx = v[0];

        for(int i=0; i<l; i++){
            if(candies[i]+extraCandies >= mx){
                rv.push_back(true);
            }
            else{
                rv.push_back(false);
            }
        }

        return rv;
        
    }
};