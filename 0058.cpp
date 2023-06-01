class Solution {
public:
    int lengthOfLastWord(string s) {

    int len = 0;
    int i = s.length() - 1;
    
    // Skip all spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }
    
    return len;
    }
};
