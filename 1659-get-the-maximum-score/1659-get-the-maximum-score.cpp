#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSum(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Use long long to prevent overflow
        long long sum1 = 0, sum2 = 0, result = 0;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                sum1 += nums1[i++];
            } else if (nums1[i] > nums2[j]) {
                sum2 += nums2[j++];
            } else {  // if elements are the same
                result += std::max(sum1, sum2) + nums1[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }

        // Add remaining elements of nums1
        while (i < nums1.size()) {
            sum1 += nums1[i++];
        }

        // Add remaining elements of nums2
        while (j < nums2.size()) {
            sum2 += nums2[j++];
        }

        // Add the maximum of the remaining sums to the result
        result += std::max(sum1, sum2);

        // Return the result as an integer
        return static_cast<int>(result % 1000000007);
    }
};
