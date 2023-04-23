class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int max_one_count=0;
        int max_one_rows=0;
        for(int i=0;i<m;i++){
            int one_count=0;
            for(int j=0;j<n;j++){
                one_count+=mat[i][j];
            }
            if(one_count>max_one_count){
                max_one_count=one_count;
                max_one_rows=i;
            }
        }
        return {max_one_rows,max_one_count};
    }
};
