/*
When B < A, the distribution is not possible and we return 0.
For B >= A, our Goal is to calculate V = B*(B-1)*(B-2)*..*(B-A+1)
we can write V = B!/(B-A)!

Observe that X! % M will always be non-zero for 0 <= X < M
Hence we conclude that (B-A)! has an inverse modulo M since 0 <= B-A < M
Using Fermat Little Theorem, we have:
power(X, M) = X % M
or, power(X, M-1) = 1 % M
or, power(X, M-2) = Y % M where Y is the inverse of X modulo M

Using this property, we can write

V = B! * power((B-A)!, M-2) % M
*/

//FERMATS LITTLE THM//
const int M=1E9+7, N=1E5+5;
// Store factorial values in an array
long long F[N];
/* Time Complexity: O(N) */
void preProcess() {
    // To make sure run only once
    static int flag=0; if(flag++) return;
    // store factorial values in an array
    F[0]=1; for(long long i=1; i<N; i++) F[i]=F[i-1]*i%M;
}
/* Time Complexity: O(log A) */
long long I(long long A) {
    // this is when B < A
    if(A<0) return 0;
    // binary exponentiation to get power((B-A)!, M-2)
    long long X=F[A], Y=1, N=M-2;
    while(N) {
        if(N&1) Y=Y*X%M;
        if(N>>=1) X=X*X%M;
    }
    return Y;
}
/* Time Complexity: O(N + Q*log(max(A,B))) where
 * N = maximum possible value of A or B
 * Q = number of function calls made
 */
int Solution::solve(int A, int B) {
    preProcess();
    return F[B]*I(B-A)%M;
}
