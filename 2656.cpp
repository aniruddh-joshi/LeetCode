class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxNum = *max_element(nums.begin(), nums.end()); // Find the maximum element in nums
        return maxNum * k + (k * (k - 1)) / 2; // Calculate the maximum sum
    }
};
