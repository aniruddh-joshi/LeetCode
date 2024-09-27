class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = 0;    //Total count of elements with maximum
        int temp = 0;     //Current maximum frequency

        for(int i = 1; i <= 100; i++){ // Start from 1 instead of 0 as per your logic
            if(mp[i] == temp){
                ans += mp[i];
            }
            else if(mp[i] > temp){
                ans = mp[i];
                temp = mp[i];
            }
        }
        return ans;
    }
};

answer 123
