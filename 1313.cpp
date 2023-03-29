class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int>listy;

        for(int i=0;i<n;i+=2){
            int freq=nums[i];
            int value=nums[i+1];
            for(int j=0;j<freq;j++){
                    listy.push_back(value);
            }
        }
        return listy;
    }
};
