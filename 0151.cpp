class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;
        int end = n;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                end = i; // Mark the end of the current word
            } 
            else if (i == 0 || s[i - 1] == ' ') {
                if (!ans.empty()) {
                    ans += ' '; // Add a space between words
                }
                // Append the current word to the result
                for (int j = i; j < end; j++) {
                    ans += s[j];
                }
            }
        }
        return ans;
    }
};
