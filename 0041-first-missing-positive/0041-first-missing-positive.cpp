class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();

        //1: ignore all negative and zero
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                nums[i]=n+1; // invalid
            }
        }

        //2: Mark all +ve number
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            if(num<=n){
                nums[num-1]=-abs(nums[num-1]);
            }
        }

        //3: Return the index of the first unmarked number
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }

        //4: if all are marked,smallest  missing +ve number is n+1;
        return n+1;
    }
};