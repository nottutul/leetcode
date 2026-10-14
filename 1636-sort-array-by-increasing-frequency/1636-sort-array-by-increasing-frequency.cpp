class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;

        for (int n : nums) {
            mp[n]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] == mp[b]) {
                return a > b;
            }
            return mp[a] < mp[b];
        });

        return nums;
    }
};