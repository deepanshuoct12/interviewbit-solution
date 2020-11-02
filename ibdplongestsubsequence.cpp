int Solution::longestSubsequenceLength(const vector<int> &A) {

    if(A.size()==0)
    return 0;
    vector<int> dp1(A.size(),0);
    vector<int> dp2(A.size(),0);
    int m2=0;
    int idx1,idx2;

    for(int i=0;i<A.size();i++)
    {   int m=0;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            m=max(m,dp1[j]);
        }
        dp1[i]=m+1;
        if(dp1[i]>m2)
        {
            m2=dp1[i];
            idx1=i;
        }
    }

    int m3=0;
    for(int i=A.size()-1;i>=0;i--)
    {   int m=0;
        for(int j=A.size()-1;j>i;j--)
        {
            if(A[i]>A[j])
            m=max(m,dp2[j]);
        }
        dp2[i]=m+1;
        if(dp2[i]>m3)
        {
            m3=dp2[i];
            idx2=i;
        }
    }
    int mx=0;
    for(int i=0;i<A.size();i++)
    {
        mx=max(dp1[i]+dp2[i]-1,mx);
    }
    return mx;

}

