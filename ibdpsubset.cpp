bool helper(vector<int>& A,int n,int sum,vector<vector<int> >& dp)
{
   if(sum==0)
   return true;
   if(n==0 && sum!=0)
   return false;

   if(dp[n][sum]!=-1)
   return (bool)dp[n][sum];

   if(A[n-1]>sum)
   dp[n][sum]=helper(A,n-1,sum,dp);
   else
   dp[n][sum]=(int)helper(A,n-1,sum,dp)||helper(A,n-1,sum-A[n-1],dp);

   return (bool)dp[n][sum];
}

int Solution::solve(vector<int> &A, int B) {
    vector<vector<int> > dp(A.size()+1,vector<int>(B+1,-1));
    return helper(A,A.size(),B,dp);

}
/*
 int n=A.size();
 bool arr[n+1][B+1];
    for(int i=0;i<=n;i++){
        arr[i][0]=1;
    }
      for(int i=1;i<=B;i++){
        arr[0][i]=0;
      }
             for(int i=1;i<=n;i++){
                  for(int j=1;j<=B;j++){
                      if(A[i-1]>j)arr[i][j]=arr[i-1][j];
                     else{
                           arr[i][j]=arr[i-1][j]||arr[i-1][j-A[i-1]];
                     }
                }
              }
    return arr[n][B];
*/
