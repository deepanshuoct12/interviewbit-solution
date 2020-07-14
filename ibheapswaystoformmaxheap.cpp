#define mod 1000000007
#define MAXN 105
long long int dp[MAXN];
// nck[i][j] = number of ways to choose j elements
//             form i elements, no order */
long long int nck[MAXN][MAXN];
// log2[i] = floor of logarithm of base 2 of i
long long int Log2[MAXN];
// to calculate nCk
long long int choose(int n, int k)
{
    if (k > n)
        return 0;
    if (n <= 1)
        return 1;
    if (k == 0)
        return 1;

    if (nck[n][k] != -1)
        return nck[n][k];

    int answer = (choose(n - 1, k - 1)%mod + choose(n - 1, k)%mod)%mod;
    nck[n][k] = answer%mod;
    return answer%mod ;
}

// calculate l for give value of n
long long int getLeft(int n)
{
    if (n == 1)
        return 0;

    long long int h = Log2[n];

    // max number of elements that can be present in the
    // hth level of any heap
    long long int numh = (1 << h)%mod; //(2 ^ h)

    // number of elements that are actually present in
    // last level(hth level)
    // (2^h - 1)
    int last = (n - ((1 << h) - 1))%mod;

    // if more than half-filled
    if (last >= (numh / 2))
        return ((1 << h) - 1)%mod; // (2^h) - 1
    else
        return ((1 << h) - 1 - ((numh / 2) - last))%mod;
}

// find maximum number of heaps for n
long long int numberOfHeaps(int n)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    long long int left = getLeft(n)%mod;
    long long int ans=( (choose(n - 1, left)%mod) * (numberOfHeaps(left))%mod * (numberOfHeaps(n - 1 - left))%mod )%mod;
    dp[n] = ans%mod;
    return ans%mod;
}
int Solution::solve(int A) {
    long long int n=A;
    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            nck[i][j] = -1;

    long long int currLog2 = -1;
    long long int currPower2 = 1;

    // for each power of two find logarithm
    for (int i = 1; i <= n; i++) {
        if (currPower2 == i) {
            currLog2++;
            currPower2 *= 2;
        }
        Log2[i] = currLog2;
    }

    return int(numberOfHeaps(n)%mod);

}
