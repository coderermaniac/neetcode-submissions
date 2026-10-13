class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int k = 0; k < nums.size(); k++) {
                if (i != k && nums[i] + nums[k] == target) {
                    return {i, k};
                }
            }
        }
        return {};
    }
};
