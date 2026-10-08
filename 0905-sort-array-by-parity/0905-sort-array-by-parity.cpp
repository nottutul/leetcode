class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> arr;
        for (int n : nums) {
            if (n % 2 == 0) {
                arr.push_back(n);
            }
        }
        for (int n : nums) {
            if (n % 2 != 0) {
                arr.push_back(n);
            }
        }

        return arr;
    }
};