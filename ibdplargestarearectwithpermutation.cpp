int Solution::solve(vector<vector<int> > &A) {
    vector<vector<int> >dp=A;
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j])
            dp[i][j]=dp[i-1][j]+1;
        }
    }
    for(int i=0;i<dp.size();i++)
       sort(dp[i].begin(),dp[i].end(), greater<int>());

    int ans=0;
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[0].size();j++)
        {
            if(dp[i][j])
            ans=max( ans , (j+1)*dp[i][j]);
        }
    }
    return ans;
}

