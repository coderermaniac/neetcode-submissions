class Solution {
public:
    int call(vector<vector<int>>&obstacleGrid , int n , int m ,vector<vector<int>>& dp){
        if(n>=0 && m>=0 && obstacleGrid[n][m]==1){
            return 0 ;    
        }
        if(n==0 && m==0) return 1;
        if(n<0 || m<0) return 0;
        if(dp[n][m]!=-1)return dp[n][m];

        int right=call(obstacleGrid ,n-1,m,dp);
        int bottom=call(obstacleGrid ,n,m-1,dp);    
        return dp[n][m]=right + bottom ;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));


       return call(obstacleGrid ,n-1,m-1,dp);
        
    }
};