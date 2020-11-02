// #define mod 1000000007
// int helper(string data,int n,vector<int>& memo)
// {
//     if(n==0)
//     return 1;

//     int s=data.length()-n;
//   //  cout<<s<<":"<<"\n";
//     if(data[s]=='0')
//     return 0;

//     if(memo[n]!=-1)
//     return memo[n]%mod;

//     int result=helper(data,n-1,memo);
//     int no=stoi(data.substr(s,s+2));
//     if( n>=2 &&  no<=26 )
//     result=(result%mod + helper(data,n-2,memo)%mod)%mod;
//      return memo[n]=result%mod;
// }

// int Solution::numDecodings(string A) {
//  int n=A.length();
//  vector<int> memo(n+1,-1);
//  return helper(A,n,memo)%mod;
//  }

#define mod 1000000007
int Solution::numDecodings(string A) {
    int N=A.length();
    int dp[N+1];
    for(int i=0; i<=N; i++){
        dp[i]=0;
    }
    dp[0] = 1;
    dp[1] = A[0]=='0' ? 0 : 1;
    for(int i=2; i<=N; i++){
        int oneDigit=stoi(A.substr(i-1,1));
        int twoDigit=stoi(A.substr(i-2,2));
        if(oneDigit>=1){
            dp[i] =(dp[i]%mod + dp[i-1]%mod)%mod;
        }
        if(twoDigit>=10 && twoDigit<=26){
            dp[i] =(dp[i]%mod + dp[i-2]%mod)%mod;
        }
    }
    return dp[N]%mod;
}
//Another way
bool isValidNum(int a)
{
    if(a >0 && a <= 26)
    return true;
    else
    return false;
}
int numDecodings(string A)
{
    int length = A.length();
    int prev = 0;
    int prevPrev = 0;
    if(length == 0) return 0;
    if(isValidNum(stoi(A.substr(0,1))))
    {
        prev = 1;
        prevPrev = 1;
    }
    for(int i = 1; i < length; i++)
    {
        if(A.at(i) == '0')
        {
            if(!isValidNum(stoi(A.substr(i-1,2))))
            return 0;
            else
            {
                prev = 0;
            }
            continue;
        }
        int totalWays = 0;
        if(isValidNum(stoi(A.substr(i,1))))
        {
            totalWays += prev;
        }
        if(isValidNum(stoi(A.substr(i-1,2))))
        {
            totalWays += prevPrev;
        }
        prevPrev = prev;
        prev = totalWays;
    }
    return max(prev,prevPrev);
}
