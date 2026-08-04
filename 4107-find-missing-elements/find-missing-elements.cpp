class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        int prevnum=nums[0];
        for(int i=1;i<n;i++){
            while(nums[i]!=prevnum+1){
                ans.push_back(++prevnum);
            }
            prevnum=nums[i];
        }

        return ans;
        
    }
};