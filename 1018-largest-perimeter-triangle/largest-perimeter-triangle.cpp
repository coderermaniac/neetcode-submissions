class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i+2<nums.size();i++){
            int sum=nums[i]+nums[i+1];
            if(sum>nums[i+2]){
                maxi=max(maxi,(nums[i]+nums[i+1]+nums[i+2]));
            }
        }
        return maxi;
        
    }
};