class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto n : nums) {
            mp[n]++;
        }

        for (auto e : mp) {
            if (e.second == 1) {
                return e.first;
            }
        }
        return 0;
    }
};