int Solution::solve(string A) {
    string B=A;
    reverse(B.begin(),B.end());
    int dp[1006][1006];
    memset(dp,0,sizeof(dp));
    int n=A.length();
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            continue;

            if(A[i-1]==B[j-1])
            {

                dp[i][j]=dp[i-1][j-1]+1;

            }
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[n][n];
}

