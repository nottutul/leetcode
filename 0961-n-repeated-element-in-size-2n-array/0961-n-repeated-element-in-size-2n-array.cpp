class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        for(auto e: mp){
            if(e.second > 1){
                return e.first;
            }
        }
        return -1;
    }
};