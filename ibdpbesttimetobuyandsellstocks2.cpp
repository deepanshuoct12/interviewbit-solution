
int Solution::maxProfit(const vector<int> &A) {

    int diff=0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>A[i-1])
        diff+=A[i]-A[i-1];
    }
    return diff;
}
