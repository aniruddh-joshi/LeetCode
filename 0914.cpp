class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto i:deck){
            mp[i]++;
        }
        int maxi = 0;
        for(auto i:mp){
            maxi = __gcd(maxi,i.second);
        }
        return maxi!=1;
    }
};
