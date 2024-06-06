class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int n=height.size();
        int left=0,right=n-1;
        while(left<right){
            int water=(right-left)*min(height[left],height[right]);
            maxi=max(maxi,water);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};