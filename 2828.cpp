class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t = "";
        for(auto i:words){
            t+=i[0];
        }
        return s==t;
    }
};
