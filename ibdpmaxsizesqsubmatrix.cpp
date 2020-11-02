int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int dp[1001][1001];
    memset(dp,0,sizeof(dp));
      int mx=0;
    for(int i=0;i<m;i++)
   {
      if(A[0][i]==1)
      dp[0][i]=1;
      mx=max(mx,dp[0][i]);
   }
    for(int i=0;i<n;i++)
    {
        if(A[i][0]==1)
         dp[i][0]=1;
       mx=max(mx,dp[i][0]);
   }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(A[i][j])
            {
                int mn=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                 dp[i][j]=1+mn;

            }
            mx=max(mx,dp[i][j]);
        }
    }
    return (mx*mx);
}

