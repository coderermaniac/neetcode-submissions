class Solution {
public:
    int call(int m  ,int n,vector<vector<int>>&dp){
        // if(m==1) return 1;
        // if(n==1)return 1;
        if(m<=0||n<=0)return 1;
        if(dp[m][n]!=-1)return dp[m][n];
        int right=call(m-1,n,dp);
        int down=call(m,n-1,dp);
        return dp[m][n]=right+down;

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return call(m-1 ,n-1,dp);
        
    }
};