int Solution::lis(const vector<int> &A) {

    int dp[2600]={0};
    int ans=0;
    for(int i=0;i<A.size();i++)
    {  int m=0;
        for(int j=0;j<i;j++)
        {
            if(A[j]<A[i])
            m=max(m,dp[j]);
        }
        dp[i]=m+1;
        ans=max(ans,dp[i]);
    }

    return ans;
}

