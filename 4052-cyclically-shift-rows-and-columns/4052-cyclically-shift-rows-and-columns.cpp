class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid,
                                    vector<int>& rowShift,
                                    vector<int>& colShift) {

        for (int i = 0; i < n; i++) {
            rotate(grid[i].begin(), grid[i].begin() + rowShift[i],
                   grid[i].end());
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(grid[i][j], grid[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            rotate(grid[i].begin(), grid[i].begin() + colShift[i],
                   grid[i].end());
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(grid[i][j], grid[j][i]);
            }
        }

        return grid;
    }
};