class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = candies[0];
        vector<bool> result;
        int n = candies.size();

        for(int i=0 ;i < n ; i++){
            if(candies[i] > maxCandies){
                maxCandies = candies[i];
            }

        }

        for(int j = 0; j < candies.size(); j++)
        {
            
            if(candies[j] + extraCandies >= maxCandies)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
       
    }
};