class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        for(int i=0;i<n1+1;i++) dp[i][0]=i;
        for(int j=0;j<n2+1;j++) dp[0][j]=j;
        for(int i=1;i<n1+1;i++){
            for(int j=1;j<n2+1;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    int insertion=1+dp[i][j-1];
                    int deletion=1+dp[i-1][j];
                    int replacement=1+dp[i-1][j-1];
                    dp[i][j]=min(insertion,min(deletion,replacement));
                }
            }
        }
        return dp[n1][n2];
    }
};