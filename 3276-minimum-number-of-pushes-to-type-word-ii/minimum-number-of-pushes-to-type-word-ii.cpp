class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(auto c:word){
            freq[c-'a']++;
        }
        int ans=0;
        sort(freq.rbegin(),freq.rend());
        for(int i=0;i<26;i++){
            if(freq[0]==0)return 0;
            ans+=freq[i]*((i/8)+1);

        }
        return ans;
        
    }
};