class Solution {
public:
    int countstep(int n){
        int total=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                total++;

            }
            else{
                n=n*3+1;
                total++;
            }
        }
        return total;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>power;
        for(int i=lo;i<=hi;i++){
            power.push_back({countstep(i),i});
        }
        sort(power.begin(),power.end());
        return power[k-1].second;
        
    }
};