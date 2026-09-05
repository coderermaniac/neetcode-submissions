class Solution {
public:
    vector<int >getfreq(int n){
        vector<int>freq(10,0);
        while(n>0){
            freq[n%10]++;
            n=n/10;
        }
        return freq;
    }
    bool reorderedPowerOf2(int n) {
        vector<int>target=getfreq(n);
        for(int i=0;i<31;i++){
            int  power=1<<i;
            if(getfreq(power)==target)return true;
        }
        return false ;



        
    }
};