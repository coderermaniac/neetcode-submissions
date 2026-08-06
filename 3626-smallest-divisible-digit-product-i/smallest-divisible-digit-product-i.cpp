class Solution {
public:
    int product(int n){
        int temp=n;
        int pro=1;
        while(temp>0){
            pro*=temp%10;
            temp=temp/10;
        }
        return pro;

    }
    int smallestNumber(int n, int t) {
        int num=n;
        while(product(num)%t!=0){
            num++;

        }
        return num;

        
    }
};