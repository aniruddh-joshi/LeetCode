class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (binary_search(nums.begin(), nums.end(), -nums[i])) {
                maxi = max(maxi, abs(nums[i]));
            }
        }
        return maxi;
    }
};
