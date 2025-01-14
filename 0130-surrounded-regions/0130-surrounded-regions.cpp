//Before you go through the code, just read the intuition and 
//approach for better clarity
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> vis(m, vector<int> (n, 0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==0 || j==0 || i==m-1 || j==n-1) && board[i][j]=='O')
                {
                    vis[i][j]=1;
                    q.push({i, j});
                }
            }
        }
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            vis[row][col]=1;
            q.pop();
            int dirx[]={-1, 0, 1, 0};
            int diry[]={0, 1, 0, -1};
            for(int i=0;i<4;i++)
            {
                int newr=row+dirx[i];
                int newc=col+diry[i];
                if(newr>=0 && newc>=0 && newr<m && newc<n && !vis[newr][newc] && board[newr][newc]=='O')
                q.push({newr, newc});
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j] && board[i][j]=='O')
                board[i][j]='X';
            }
        }        
    }
};