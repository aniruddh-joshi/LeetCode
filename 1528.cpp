class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>ch(s.size());
        int j=0;
        for(int i=0;i<indices.size();i++){
            ch[indices[i]] = s[j++];
        }
        s="";
        for(auto i:ch){
            s+=i;
        }
        return s;
    }
};
