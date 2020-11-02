int Solution::isMatch(const string str1, const string str2) {
    int n=str1.size(),m=str2.size(),i,j;
    vector<vector<bool> > dp(n+1,vector<bool>(m+1,false));
    //memset(dp,false,sizeof(dp));
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i>=1&&str1[i-1]=='*'){
                dp[i][j]=dp[i-1][j];
                if(j>=1){
                    dp[i][j]=(dp[i][j]|dp[i][j-1]);
                }
            }
            else if(j>=1&& str2[j-1]=='*'){
                dp[i][j]=dp[i][j-1];
                if(i>=1){
                    dp[i][j]=(dp[i][j]|dp[i-1][j]);
                }
            }
            else if(i==0 && j==0){
                dp[i][j]=true;
            }
            else if(i==0){
                dp[i][j]=false;
            }
            else if(j==0){
                dp[i][j]=false;
            }
            else if(str1[i-1]=='?'||str2[j-1]=='?'||str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=false;
            }
            //cout<<"i is "<<i<<" j is "<<j<<" val is "<<dp[i][j]<<endl;
        }
    }
    if(dp[n][m])
        return 1;
    return 0;
}
/*my code
int Solution::isMatch(const string A, const string B) {

    int n=A.length();
    int m=B.length();
    bool dp[n+1][m+1];
   // memset(dp,false,sizeof(dp));

    dp[0][0]=true;

    for(int i=1;i<m;i++)
    {
        if(B[i-1]=='*')
        dp[0][i]=dp[0][i-2];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]==B[j-1] || B[j-1]=='?')
            dp[i][j]=dp[i-1][j-1];

            else if(B[j-1]=='*')
            {
                dp[i][j]=dp[i][j-2];
                if(B[j-2]==A[i-1] || B[j-2]=='?')
                {
                    dp[i][j]=dp[i][j]|dp[i-1][j];
                }

            }
            else
            dp[i][j]=false;
        }
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }

    if(dp[n][m])
    return 1;
    return 0;
}
*/
