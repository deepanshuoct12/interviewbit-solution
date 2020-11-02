int Solution::solve(vector<vector<int> > &A) {

    int n=A.size();
    int dp[1001][1001];
    memset(dp,0,sizeof(dp));
    int mx=INT_MIN;
    dp[0][0]=A[0][0];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int val = max(dp[i-1][j-1],dp[i-1][j]);
            if(j==0)
            val=dp[i-1][j];

            dp[i][j]=A[i][j]+val;

        }
    }

    for(int i=0;i<n;i++)
     mx=max(mx,dp[n-1][i]);

    return mx;
}

