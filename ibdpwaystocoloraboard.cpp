#define mod 1000000007
int Solution::solve(int A) {

    long long int color3=24,color2=12;

    for(int i=2;i<=A;i++)
    {
        long long int temp=color3;

        color3 = ((10*color2)%mod + (11*color3)%mod)%mod;
        color2 = ( (5*temp)%mod + (7*color2)%mod )%mod;
    }

    return int((color3%mod+color2%mod)%mod);
}

