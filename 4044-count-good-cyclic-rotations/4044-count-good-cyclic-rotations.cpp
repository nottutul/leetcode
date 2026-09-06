class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long int n = nums.size();
        long long int half = n / 2;
        long long int count = 0;

        long long int total = 0;

        for (long long int i = 0; i < n; i++) {
            total += nums[i];
        }

        long long int fstHalf = 0;
        for (long long int i = 0; i < half; i++) {
            fstHalf += nums[i];
        }

        long long int secHalf = 0;
        for (long long int i = 0; i < n; i++) {
            secHalf = total - fstHalf;

            if (fstHalf > secHalf)
                count++;

            fstHalf -= nums[i];
            fstHalf += nums[(i + half) % n];
        }
        return count;
    }
};