class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for (int i=0;i<s.size();i++){
            int hash[256]={0};
            string ans="";
            for(int j=i;j<s.size();j++){
                ans+=s[j];
                if(hash[s[j]]==1)break;
                hash[s[j]]=1;
                maxlen=max(maxlen,(j-i+1));



            }

            
        }
        return maxlen;
        
    }
};
