// //int dp[101][10007];
// int helper(int A,int B)
// {
//     if(B==1 || B==0)
//      return B;

//     if(A==1)
//      return B;

//     int mn=INT_MAX;

//     //  if(dp[A][B])
//     //  return dp[A][B];

//   for(int x=2;x<=B;x++)
//   {
//       int res=max(helper(A-1,x-1),helper(A,B-x));
//       if(res<mn)
//       {    mn=res;
//           //dp[A][x]=res;
//       }
//   }
//     return mn+1;//dp[A][B]=(mn+1);
// }

int Solution::solve(int A, int B) {


    vector<vector<int>> dp(A+1,vector<int>(B+1,0));

for(int i=1;i<=B;i++)
    dp[1][i]=i;

for(int i=1;i<=A;i++)
{
    dp[i][1]=1;
}
int low=0,high=0;
for(int i=2;i<=A;i++)
{
    for(int j=2;j<=B;j++)
    {
        if(i>j)             //cosidering worst case scenario
        {    dp[i][j]=dp[i-1][j];
                continue;
        }
        int t=INT_MAX;
        low=1;
        high=j;
        while(low+1<high)
        {
            int mid=(low+high)/2;

            if(dp[i-1][mid-1]<dp[i][j-mid])
                low=mid;
            else if(dp[i-1][mid-1]>dp[i][j-mid])
                high=mid;
            else
                high=low=mid;

        }
        t=1+min(max(dp[i-1][low-1],dp[i][j-low]),max(dp[i-1][high-1],dp[i][j-high]));


        dp[i][j]=t;
    }
}


return dp[A][B];
    //DP
    // int dp[A+1][B+1];
    // for(int i=1;i<=A;i++)
    // {
    //     dp[i][1]=1;
    //     dp[i][0]=0;
    // }
    // for(int i=1;i<=B;i++)
    //     dp[1][i]=i;

    //  for(int i=2;i<=A;i++)
    //  {
    //      for(int j=2;j<=B;j++)
    //      {
    //          dp[i][j]=INT_MAX;
    //          for(int x=1;x<=j;x++)
    //          {
    //              int res=1+max(dp[i-1][x-1],dp[i][j-x]);
    //              if(res<dp[i][j])
    //              dp[i][j]=res;
    //          }

    //      }
    //  }

    //  return dp[A][B];
  //  memset(dp,0,sizeof(dp));

 // return helper(A,B);//dp[A][B];//helper(A,B);
}

