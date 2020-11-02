int Solution::minCut(string A) {

    bool dp[A.length()][A.length()];

    memset(dp,false,sizeof(dp));

    for(int i=0;i<A.length();i++)
    dp[i][i]=true;

    for(int i=0;i<A.length()-1;i++)
     {
         if(A[i]==A[i+1])
         dp[i][i+1]=true;

     }
      for(int len=3;len<=A.length();len++)
      {
          for(int i=0;i<A.length()-len+1;i++)
          {
              int j=i+len-1;
              if(A[i]==A[j]&&dp[i+1][j-1])
              dp[i][j]=true;
          }
      }
      int cuts[A.length()];
      for(int i=0;i<A.length();i++)
      {
          int temp=INT_MAX;
          if(dp[0][i])
          cuts[i]=0;
          else
          {
              for(int j=0;j<i;j++)
              {
                  if(dp[j+1][i] && temp>cuts[j]+1)
                  temp=cuts[j]+1;
              }
              cuts[i]=temp;
          }
      }
      return cuts[A.length()-1];
}

