class NumMatrix {
public:

    int n,m;
    vector<vector<int> > dp;
     

    NumMatrix(vector<vector<int>> &matrix) {
        
        n=matrix.size();
        
        m=n>0?matrix[0].size():0;
        
        dp=vector<vector<int> >(n+1,vector<int>(m+1,0));
        
        //dp[1][1]=matrix[0][0];
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]+matrix[i-1][j-1]-dp[i-1][j-1];
            }
        }
        
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
    
        return dp[row2+1][col2+1] - dp[row2+1][col1] - dp[row1][col2+1] + dp[row1][col1];
    }
};
