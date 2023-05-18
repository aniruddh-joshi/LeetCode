class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()-k); //first kar rahe hai n-k
        reverse(nums.end()-k,nums.end()); //reverse last k letters
        reverse(nums.begin(),nums.end()); // reverse all numbers
    }
};
