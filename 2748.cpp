class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int beautifulPairs=0;
        int x,y;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]){
                x=(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            for(int j=i+1;j<n;j++){
                y=nums[j]%10;
                if(__gcd(x,y)==1){
                    beautifulPairs++;
                }
            }
        }
        return beautifulPairs;
    }
};
