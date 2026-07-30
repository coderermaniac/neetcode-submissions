class Solution {
public:
    int minimumPushes(string word) {


        int n=word.size();
        int button=n/8;
        int rem=n%8;
        return 4*button*(button+1)+rem*(button+1);


        
    }
};