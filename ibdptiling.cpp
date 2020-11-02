#define mod 1000000007
int Solution::solve(int A) {

    long long int dp[A+1][8];
    memset(dp,0,sizeof(dp));
    dp[0][7]=1;
    for(int i=1;i<=A;i++)
    {
        dp[i][0]=(dp[i][0]%mod + dp[i-1][7]%mod)%mod;
        dp[i][1]=(dp[i][1]%mod + dp[i-1][6]%mod)%mod;
        dp[i][3]=(dp[i][3]%mod + dp[i-1][4]%mod + dp[i-1][7]%mod)%mod;
        dp[i][4]=(dp[i][4]%mod + dp[i-1][3]%mod)%mod;
        dp[i][6]=(dp[i][6]%mod + dp[i-1][1]%mod + dp[i-1][7]%mod)%mod;
        dp[i][7]=(dp[i][7]%mod + dp[i-1][6]%mod + dp[i-1][3]%mod + dp[i-1][0]%mod)%mod;
    }


    return int(dp[A][7]%mod);
}

