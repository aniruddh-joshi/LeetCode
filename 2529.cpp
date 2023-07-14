class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countPositive=0;
        int countNegative=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) countPositive++;
            else if(nums[i]<0) countNegative++;
        }
        return max(countPositive,countNegative);
    }
};
