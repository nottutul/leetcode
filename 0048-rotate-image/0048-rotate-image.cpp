class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix[0].size();
        vector<vector<int>> ans;
        vector<int> v;
        for (int c = 0; c < len; c++) {
            for (int r = len - 1; r >= 0; r--) {
                v.push_back(matrix[r][c]);
            }
            ans.push_back(v);
            v.clear();
        }

        matrix = ans;
    }
};