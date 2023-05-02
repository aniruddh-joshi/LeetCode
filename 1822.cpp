class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int count_negative = 0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num==0)  return 0;
            else if(num<0)  count_negative++;
        }
        if(count_negative % 2 == 0) return 1;
        else    return -1;
    }
};
