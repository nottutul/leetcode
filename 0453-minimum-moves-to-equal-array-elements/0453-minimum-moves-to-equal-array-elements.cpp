class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end());

        return sum - len * nums[0];
    }
};