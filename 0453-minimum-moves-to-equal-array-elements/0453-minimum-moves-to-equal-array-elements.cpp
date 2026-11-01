class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        auto min_it = min_element(nums.begin(), nums.end());

        return sum - len * (*min_it);
    }
};