class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;
    int sol = 0;
    int i = 0;

    for (int j = 0; j < s.size(); ++j) {
        mp[s[j]]++;
        while (mp[s[j]] > 1) {
            mp[s[i++]]--;
        }
        sol = max(sol, j - i + 1);
    }
    return sol;
    }
};                                                                        