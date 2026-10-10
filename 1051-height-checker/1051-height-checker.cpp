class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp = heights;
        int l = heights.size();
        int ans = 0;

        sort(exp.begin(), exp.end());

        for (int i = 0; i < l; i++) {
            if (exp[i] != heights[i]) {
                ans++;
            }
        }
        return ans;
    }
};