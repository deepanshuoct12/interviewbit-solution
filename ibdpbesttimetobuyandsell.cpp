int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0)
    return 0;
    int prevbuy=A[0];
    int mx=0;
    for(int i=1;i<A.size();i++)
    {
        if(prevbuy>A[i])
        prevbuy=A[i];
        else
        mx=max(mx,A[i]-prevbuy);
    }

    return mx;
    // int mx=0;
    // for(int i=1;i<A.size();i++)
    // {   int mn=INT_MAX;
    //     for(int j=0;j<i;j++)
    //     {
    //         mn=min(mn,A[j]);

    //     }

    //     mx=max(mx,A[i]-mn);

    // }
    // return (mx);
}

