int Solution::pow(int x, int n, int d) {
    long long int res = 1,x2=x,n2=n,d2=d;     // Initialize result

    x2 = x2 % d;
    if (x2 == 0) return 0;
    if(x2==1)
    return 1;

    while (n2 > 0)
    {
        if (n2 & 1)
        res = (res*x2) % d2;

        n2 = n2>>1;
        x2 = ((x2%d2)*(x2%d2)) % d2;
    }
    if(res<0)
    res = ((res%d2)+d2)%d2;

    return res;
}
