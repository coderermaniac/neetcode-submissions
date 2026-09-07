class Solution {
public:
    // bool isprime(int x){
    //     for(int i=2;i<=sqrt(x);i++){
    //         if(x%i==0)return false;
    //     }
    //     return true;
    // }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> pair;
        vector<int>isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        for(int i=2;i<=n;i++){
            if(isprime[i]){
                for(long long  j= 1ll*i*i;j<=n;j+=i){
                    isprime[j]=false;
                }
            }
        }

        for(int i=2;i<=n/2;i++){
            int j=n-i;
            if((i+j==n)&&isprime[i]&&isprime[j]){
             pair.push_back({i,j});
            }
        }
        return pair;
        
        
    }
};