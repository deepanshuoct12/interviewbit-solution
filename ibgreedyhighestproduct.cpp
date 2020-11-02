
int Solution::maxp3(vector<int> &A) {

    int n=A.size();
    sort(A.begin(),A.end());
    if(A.size()==3)
    return ((A[n-1]*A[n-2])*A[n-3]);

    int p=0;
    if(A[0]<0 && A[1]<0)
     p=A[0]*A[1];

     p*=A[n-1];

    int p2 = ((A[n-1]*A[n-2])*A[n-3]);

    return max(p,p2);
}
