class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            vector<int>hash(27,0);
            for(int j=i;j<n;j++){
                hash[s[j]-'a']++;
                for(int l=0;l<27;l++){
                if(hash[l]>=k){
                    ans++;
                    break;
                }
            }
            }
            
        }
        return ans;
        
    }
};