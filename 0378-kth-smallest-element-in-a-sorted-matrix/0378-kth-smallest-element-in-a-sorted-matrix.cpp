class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> v;

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                v.push_back(matrix[r][c]);
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];
    }
};