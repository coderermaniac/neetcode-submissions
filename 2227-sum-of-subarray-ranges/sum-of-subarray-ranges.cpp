class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        vector<int>range;
        for(int i=0;i<nums.size();i++){
            vector<int>sub;
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int j=i;j<nums.size();j++){
                if(mini>nums[j])mini=nums[j];
                if(maxi<nums[j])maxi=nums[j];
                int diff=maxi-mini;
                range.push_back(diff);

            }
        }
        long long sum=0;
        for(auto x:range){
            sum+=x;
        }
        return sum;
        
    }
};