class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (next_permutation(nums.begin(), nums.end())) {
            int i = 0;
            for (int num : nums) {
                nums[i] = num;
                i++;
            }
            i=0;
        }
    }
};