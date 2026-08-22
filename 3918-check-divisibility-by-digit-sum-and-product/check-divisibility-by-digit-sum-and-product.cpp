class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int n2=n;
        while(n>0){
            sum+=n%10;
            pro*=n%10;
            n=n/10;
        }
        int ans=sum+pro;
        if(n2%ans==0)return true;
        return false ;
        
    }
};