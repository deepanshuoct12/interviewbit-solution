int Solution::solve(string A, string B) {

    int dp[1006][1006];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<=A.size();i++)
    {
        for(int j=0;j<=B.size();j++)
        {
            if(i==0 || j==0)
            continue;

            if(A[i-1]==B[j-1])
            dp[i][j]=1+dp[i-1][j-1];

            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[A.size()][B.size()];
}

