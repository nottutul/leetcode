class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int land = 0;
        int sharedEdge = 0;

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (grid[r][c] == 1) {
                    land++;

                    if (r + 1 < row and grid[r + 1][c] == 1) {
                        sharedEdge++;
                    }
                    if (c + 1 < col and grid[r][c + 1] == 1) {
                        sharedEdge++;
                    }
                }
            }
        }
        return (4 * land) - (2 * sharedEdge);
    }
};