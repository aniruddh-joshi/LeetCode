class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>exp;
        exp=heights;
        sort(exp.begin(),exp.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=exp[i]){
                count++;
            }
            else{
                continue;
            }
        }
        return count;
    }
};
