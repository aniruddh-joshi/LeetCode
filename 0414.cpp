class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int max3=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
                max3=nums[i];
            }
            else if(i==1 && nums[i]==nums[i-1]){
                count++;
                max3=nums[i];
            }
            if(count>2){
                return max3;
            }
        }
        if(count+1==3 && nums[0]!=nums[1]){
            return nums[0];
        }
        return nums[nums.size()-1];
    }
};
