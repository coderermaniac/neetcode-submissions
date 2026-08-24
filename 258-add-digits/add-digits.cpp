class Solution {
public:
    int singleSum(int &num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        if(sum/10==0)return sum;
        return singleSum(sum);
    
    }
    int addDigits(int num) {
        return singleSum(num);
        
    }
};