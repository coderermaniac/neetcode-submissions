class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)ans.push_back(nums[i]);
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]==pivot)ans.push_back(nums[j]);
        }
        for(int k=0;k<nums.size();k++){
            if(nums[k]>pivot)ans.push_back(nums[k]);
        }
        return ans;


    }
};