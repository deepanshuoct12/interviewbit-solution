#define mod 1000000007
int Solution::chordCnt(int A) {

    long long int dp[2*A+1]={0};
    dp[0]=1;
    dp[2]=1;
    for(int i=4;i<=2*A;i+=2)
    {
        for(int j=0;j<=i-2;j+=2)
        {
            dp[i]=(dp[i]%mod + ((dp[j]%mod)*(dp[i-j-2]%mod))%mod)%mod;
        }
    }
    return int(dp[2*A]%mod);
}

