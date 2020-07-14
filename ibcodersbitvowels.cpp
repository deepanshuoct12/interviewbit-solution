#define mod 1000000007
int Solution::solve(int A) {
    if(A<=0)
    return 0;

    if(A==1)
    return 5;
    vector<long long int >a(5,1);
    vector<long long int>b(5);
    A--;
    while(A--){
     b[0]=(a[2]+a[3])%mod;
     b[1]=(a[0]+a[2]+a[4])%mod;
     b[2]=(a[0]+a[1])%mod;
     b[3]=(a[2]+a[4])%mod;
     b[4]=(a[2]+a[3])%mod;
     a=b;
    }
    long long int sum=0;
    for(int i=0;i<5;i++)
       sum+=(a[i])%mod;

       return int(sum%mod);


}

