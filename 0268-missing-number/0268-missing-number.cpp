class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int n = nums.size();

        long long int total = accumulate(nums.begin(), nums.end(), 0);

        long long int sum = n * (n + 1) / 2;

        return sum - total;
    }
};