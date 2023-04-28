class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer(nums.size());
        int leftSum = 0;
        int rightSum = 0;
        for(int i = 0; i < nums.size(); i++){
            leftSum += nums[i];
            answer[i] = leftSum;
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            rightSum += nums[i];
            answer[i] -= rightSum;
            answer[i] = abs(answer[i]);
        }
        return answer;
    }
};
