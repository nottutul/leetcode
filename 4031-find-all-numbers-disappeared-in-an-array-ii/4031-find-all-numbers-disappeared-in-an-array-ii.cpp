class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,int upper) {
        int len = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> miss;

        int nextVal = lower;

        for (int n : nums) {
            if (n > upper) {
                break;
            }
            if (n < nextVal) {
                continue;
            }
            if (n > nextVal) {
                miss.push_back({nextVal, n - 1});
            }

            nextVal = n + 1;
        }

        if (nextVal <= upper) {
            miss.push_back({nextVal, upper});
        }

        return miss;
    }
};