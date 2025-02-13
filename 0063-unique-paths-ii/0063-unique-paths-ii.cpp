class Solution {
public:
    int recurr(int i,int j, vector<vector<int>>&ob, vector<vector<int>>&v){
        if(i==0 || j==0 || ob[i-1][j-1] == 1){
            v[i][j] = 0;
            return v[i][j];
        }
        if(i==1 && j==1){
            v[i][j] = 1;
            return v[i][j];
        }
        if(v[i][j] != -1){
            return v[i][j];
        }
        v[i][j] = recurr(i-1,j,ob,v) + recurr(i,j-1,ob,v);
        return v[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>v(n+1,vector<int>(m+1,-1));
        return recurr(n,m,obstacleGrid,v);
    }
};