class Solution {
public:
    int kthDigit(long long k) {
        if(k <= 9) return k;
        long long relK = k - 10;
        long long p = 1;
        long long cur = 1LL * 90 * 2 * p;
        int d = 2;
        while(cur <= relK){
            relK -= cur;
            d++;
            p *= 10;
            cur = 1LL * 90 * d * p;
        } 
        long long b = relK / (10 * d);
        relK %= (10 * d);
        long long x = relK / d;
        if((p + b) % 2) x = 9 - x;
        long long num = 10 * (p + b) + x;
        string s = to_string(num);
        int dig = relK % d;
        return s[dig] - '0';
    }
};