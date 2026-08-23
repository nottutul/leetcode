class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;

        if (numRows >= 1)
            dp.push_back({1});

        if (numRows >= 2)
            dp.push_back({1, 1});

        for (int i = 2; i < numRows; i++) {
            vector<int> row;

            row.push_back(1);

            for (int j = 1; j < i; j++) {
                row.push_back(dp[i-1][j-1] + dp[i-1][j]);
            }

            row.push_back(1);

            dp.push_back(row);
        }

        return dp;
    }
};