int Solution::solve(vector<int> &A) {

    int sum=0;
    for(auto x:A)
    sum+=x;

    if(A.size()==1)
    return sum;

    int n=A.size();
    bool dp[n+1][sum+1];
   // memset(dp,false,sizeof(dp));
    for(int i=1;i<=sum;i++)
     dp[0][i]=false;
    for(int i=0;i<=n;i++)
     dp[i][0]=true;

     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=sum;j++)
         {
             dp[i][j]=dp[i-1][j];
             if(A[i-1]<=j)
             dp[i][j]|=dp[i-1][j-A[i-1]];
         }
     }

    //  for(int i=0;i<=n;i++)
    //  {
    //      for(int j=0;j<=sum;j++)
    //      cout<<dp[i][j]<<" ";
    //      cout<<"\n";
    //  }

     int diff=INT_MAX;

     for(int j=sum/2;j>=0;j--)
     {
         if(dp[n][sum]==true)
         {
             diff=sum-2*j;
             break;
         }
     }
     return diff;

}

