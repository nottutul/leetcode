class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for (int x : nums) {
            st.insert(x);
        }

        int len = st.size();
        if (len < 3) {
            sort(nums.rbegin(), nums.rend());
            return nums[0];
        }

        int i = 0;
        int ans = 0;
        for (int x : st) {
            ans = x;
            i++;
            if (i > len - 3)
                break;
        }
        return ans;
    }
};