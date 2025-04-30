class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> diff1, diff2;
        int i = 0, j = 0;
        int prev = INT_MIN; // Initialize to lowest possible value
        
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                if (nums1[i] != prev) {
                    diff1.push_back(nums1[i]);
                    prev = nums1[i];
                }
                i++;
            } else if(nums1[i] > nums2[j]){
                if (nums2[j] != prev) {
                    diff2.push_back(nums2[j]);
                    prev = nums2[j];
                }
                j++;
            } else {
                prev = nums1[i];
                i++;
                j++;
            }
        }
        
        while(i < nums1.size()){
            if (nums1[i] != prev) {
                diff1.push_back(nums1[i]);
                prev = nums1[i];
            }
            i++;
        }
        
        while(j < nums2.size()){
            if (nums2[j] != prev) {
                diff2.push_back(nums2[j]);
                prev = nums2[j];
            }
            j++;
        }
        
        return {diff1, diff2};
    }
};