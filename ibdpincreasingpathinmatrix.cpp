int Solution::solve(vector<vector<int> > &A) {

    int dp[1001][1001];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    int n=A.size();
    int m=A[0].size();

    for(int j=1;j<m;j++)
    if(A[0][j]>A[0][j-1] && dp[0][j-1]!=0)
       dp[0][j]=dp[0][j-1]+1;

    for(int i=1;i<n;i++)
      if(A[i][0]>A[i-1][0] && dp[i-1][0]!=0)
      dp[i][0]=dp[i-1][0]+1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(A[i][j]>A[i-1][j] && dp[i-1][j]!=0)
            dp[i][j]=dp[i-1][j]+1;

            if(A[i][j]>A[i][j-1] && dp[i][j-1]!=0)
            dp[i][j]=max(dp[i][j],dp[i][j-1]+1);


        }
    }
    if(dp[n-1][m-1]==0)
    return -1;
    return dp[n-1][m-1];
}

