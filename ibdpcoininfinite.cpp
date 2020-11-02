#define mod 1000007
  int dp[B+1]={0};
     dp[0]=1;
    for(int i=1;i<=A.size();i++)
    {
        for(int j=A[i-1];j<=B;j++)
         dp[j]+=(dp[j-A[i-1]]%mod);
    }
    return dp[B]%mod;
/*int Solution::coinchange2(vector<int> &A, int B) {

    long long int dp[A.size()+1][B+1];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<=A.size();i++)
    dp[i][0]=1;


    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=B;j++)
        {
            if(j>=A[i-1])
            dp[i][j]=(dp[i-1][j]%mod + dp[i][ j-A[i-1] ]%mod )%mod;
            else
            dp[i][j]=dp[i-1][j]%mod;
        }
    }

    return int(dp[A.size()][B]%mod);
}*/
