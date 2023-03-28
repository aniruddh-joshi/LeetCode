class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        
        for(int i=0;i<n;i++){
            sum1=sum1+nums[i];
            int num=nums[i];
            while(num>0){
                sum2=sum2+num%10;
                num=num/10;
            }
        }
        return abs(sum1-sum2);
    }
};
