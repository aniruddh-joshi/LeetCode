class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>indexes;
        vector<int>sol;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == c) indexes.push_back(i);
        }

        for(int i = 0; i < s.length(); i++)
        {
            int min_dist = 10000;
            for(int j : indexes)
            {
                min_dist = min(min_dist,abs(j-i));
            }
            sol.push_back(min_dist);
        }
        return sol;
    }
};
