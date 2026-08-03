#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            int takeSum = 0;
            int maxDiff = -1e9; 

            for (int k = 0; k < 3 && i + k < n; k++) {
                takeSum += stoneValue[i + k];
                maxDiff = max(maxDiff, takeSum - dp[i + k + 1]);
            }

            dp[i] = maxDiff;
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";
    }
};