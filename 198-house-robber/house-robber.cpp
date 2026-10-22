class Solution {
public:
    int call(int n ,vector<int>&nums ,vector<int>&dp){
        if(n==0)return nums[n];
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int take=nums[n]+call(n-2,nums,dp);
        int nottake=0+call(n-1,nums,dp);
        return dp[n]=max(take ,nottake);

        
    }
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int>dp(n,-1);
        return call(n-1,nums,dp);

        
    }
};