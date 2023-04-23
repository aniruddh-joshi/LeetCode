class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
          int n = nums.size();
    int m = divisors.size();
    vector<int> cnt(m, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (nums[i] % divisors[j] == 0) {
                cnt[j]++;
            }
        }
    }
    int ans = -1, maxCnt = -1;
    for (int i = 0; i < m; i++) {
        if (cnt[i] > maxCnt || (cnt[i] == maxCnt && divisors[i] < ans)) {
            ans = divisors[i];
            maxCnt = cnt[i];
        }
    }
    return ans;
    }
};
