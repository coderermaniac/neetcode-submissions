class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0); // Stores frequency of characters in window
        int maxFreq = 0;          // Most frequent character count in current window
        int maxLength = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            // Add current character to frequency map
            count[s[r] - 'A']++;
            
            // Track the maximum frequency seen in the window
            maxFreq = max(maxFreq, count[s[r] - 'A']);

            // Current window length is (r - l + 1).
            // If replacements needed > k, shrink window from left.
            while ((r - l + 1) - maxFreq > k) {
                count[s[l] - 'A']--;
                l++;
            }

            // Record maximum valid window size
            maxLength = max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};