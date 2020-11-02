int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n=A.size();
    int dp[1001][1001];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=C;j++)
        {
            if(j<B[i-1])
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=max( dp[i-1][j] , dp[i-1][j-B[i-1]]+A[i-1] );
        }
    }
    return dp[n][C];
}

