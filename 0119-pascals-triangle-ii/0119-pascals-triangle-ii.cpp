const vector<vector<int>> dp = []() {
    int numRows = 34;
    vector<vector<int>> tempDP;

    if (numRows >= 1)
        tempDP.push_back({1});

    if (numRows >= 2)
        tempDP.push_back({1, 1});

    for (int i = 2; i < numRows; i++) {
        vector<int> row;
        row.push_back(1);

        for (int j = 1; j < i; j++) {
            row.push_back(tempDP[i - 1][j - 1] + tempDP[i - 1][j]);
        }

        row.push_back(1);
        tempDP.push_back(row);
    }

    return tempDP;
}();

class Solution {
public:
    vector<int> getRow(int rowIndex) { return dp[rowIndex]; }
};