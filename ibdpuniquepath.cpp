int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {

    int dp[1000][1000];
    memset(dp,0,sizeof(dp));
    int m=A.size();
    int n=A[0].size();

    if(A[0][0]==1)
    return 0;

    dp[0][0]=1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==1 || (i==0 && j==0))
            continue;

          dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }



    return dp[m-1][n-1];
}

