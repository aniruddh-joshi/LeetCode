class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pairs=0,left=0;
        for(int i=0;i<nums.size();i++){
            if( i+1 <nums.size() && nums[i]==nums[i+1]){
                pairs++;
                i++;
            }
            else{
                left++;
            }
        }
        return {pairs,left};
    }
};
