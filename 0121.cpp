class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            int x=prices[i];
            mini=min(mini,x);
            maxi=max(x-mini,maxi);
        }
        return maxi;
    }
};
