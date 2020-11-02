int helper(vector<int> &v,int i,int j,vector<vector<int> > &dp)
{

    if(dp[i][j]!=-1)
    return dp[i][j];
    else if(i==j)
    dp[i][j]=0;
    else if(i==j-1)
    dp[i][j]=v[i]+v[j];
    else
    {
        int val=INT_MAX;
        int sum=v[j];
        for(int k=i;k<j;k++)
        {
            sum+= v[k];
            val=min(val,helper(v,i,k,dp)+helper(v,k+1,j,dp));
        }
        dp[i][j]=val+sum;
    }
     return dp[i][j];

}
int Solution::solve(vector<int> &A) {
     int n=A.size();
     vector<vector<int> >dp(n,vector<int>(n,-1));

     return helper(A,0,n-1,dp);

}

