class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int w = 0;

        for(int i=0; i<m; i++){
            int s=0;
            for(int j=0; j<n; j++){
                s = s+accounts[i][j];
            }
            w = max(w,s);
        }
        return w;
    }
};