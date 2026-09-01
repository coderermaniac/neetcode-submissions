class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans=0;
        int maxi=0;
        int n=weight.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,weight[i]);
            if(weight[i]<maxi){
                ans++;
                maxi=0;
            }
        }
        return ans;
        
    }
};