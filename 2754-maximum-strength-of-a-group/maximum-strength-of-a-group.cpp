class Solution {
public:
    long long maxStrength(vector<int>& nums) {

        int max_neg=INT_MIN;
        int neg=0;
        int pos=0;
        int zero=0;
        long long pro=1;

        if(nums.size()==1)return nums[0];

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pro*=nums[i];
                pos++;
            }
            if(nums[i]<0){
                max_neg=max(max_neg,nums[i]);
                neg++;
                pro*=nums[i];
            }
            if(nums[i]==0){
                zero++;
            }

        }
        if(neg%2!=0){
            pro=pro/max_neg;
        }
        if(pos==0&&neg<=1){
            return 0;

        }
        return pro;


        
    }
};