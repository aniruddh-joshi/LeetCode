class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty()){
            return -1;
        }
        else{
            return ans[0];
        }
    }
};
