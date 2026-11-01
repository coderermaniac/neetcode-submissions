class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<vector<int>>> dp(r,
            vector<vector<int>>(c, vector<int>(c, -1)));

        return f(0, 0, 0, c-1, grid, dp);
    }

    int f(int i, int j, int p, int q,
          vector<vector<int>>& grid,
          vector<vector<vector<int>>>& dp) {

        int r = grid.size();
        int c = grid[0].size();

        if(j < 0 || j >= c || q < 0 || q >= c)
            return -1e8;

        if(i == r-1) {
            if(j == q) return grid[i][j];
            else return grid[i][j] + grid[i][q];
        }

        if(dp[i][j][q] != -1)
            return dp[i][j][q];

        int maxi = -1e8;

        for(int dj1 = -1; dj1 <= 1; dj1++) {
            for(int dj2 = -1; dj2 <= 1; dj2++) {

                int value = 0;

                if(j == q)
                    value = grid[i][j];
                else
                    value = grid[i][j] + grid[i][q];

                value += f(i+1, j+dj1, p, q+dj2, grid, dp);

                maxi = max(maxi, value);
            }
        }

        return dp[i][j][q] = maxi;
    }
};