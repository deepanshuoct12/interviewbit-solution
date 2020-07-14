int Solution::sqrt(int A) {

    long long int f=0,l=A;
    long long int ans;
    while(f<=l){

        long long  int m=(f+l)/2;
        long long int x=m*m;

        if(x==A)
        return m;

        else if(x<A)
         {
             f=m+1;
             ans=m;
         }

        else
        l=m-1;

    }
    return int(ans);
}

