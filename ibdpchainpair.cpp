int Solution::solve(vector<vector<int> > &A) {

  int ans=1;
  int dp[1004]={0};
    dp[0]=1;
    for(int i=1;i<A.size();i++)
    {
        int m=0;
        for(int j=0;j<i;j++){
        if(A[i][0]>A[j][1])
           m=max(m,dp[j]);
        }
         dp[i]=m+1;
         ans=max(ans,dp[i]);
    }
    return ans;
}

