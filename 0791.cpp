class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.size();
        int m = s.size();
        string ans = "";
        unordered_map<char, int> mp, mp1;
        
        for (int i = 0; i < m; i++) {
            mp[s[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (mp.find(order[i]) != mp.end()) {
                while (mp[order[i]]) {
                    ans += order[i];
                    mp[order[i]]--;
                    mp1[order[i]]++;
                }
            }
        }
        
        for (int i = 0; i < m; i++) {
            if (mp1.find(s[i]) == mp1.end()) {
                ans += s[i];
            }
        }
        
        return ans;
    }
};
