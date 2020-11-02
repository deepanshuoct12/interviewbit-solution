int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    if(n<=1 || B<=0)
    return 0;

    if(B>=n/2)
    {
        int diff=0;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]>A[i-1])
            diff+=(A[i]-A[i-1]);
        }
        return diff;
    }
    vector<int>buy(n,INT_MIN);
    vector<int>sell(n,0);
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B;j++)
        {
            buy[j]=max(buy[j],(j==0)?0-A[i]:sell[j-1]-A[i]);
            sell[j]=max(sell[j],buy[j]+A[i]);
        }
    }
    return sell[B-1];
}

