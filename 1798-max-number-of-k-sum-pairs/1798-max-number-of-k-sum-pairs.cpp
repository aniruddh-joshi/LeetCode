#include<unordered_map>
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int , int> um;
        int n = nums.size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(um.find(k-nums[i]) != um.end()){
                count++;
                um[(k-nums[i])]--;
                if(um[(k-nums[i])] == 0){
                um.erase(k-nums[i]);
                }
            }else{
                um[nums[i]]++;
            }
        }
       return count;
    }
};