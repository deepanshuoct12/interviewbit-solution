int Solution::solve(const vector<int> &A) {
 int n=A.size();
 int ans=2;
 if(n<=2)
 return n;
 vector<unordered_map<int,int> >dp(n);
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         int diff=A[j]-A[i];
         if(dp[i].find(diff)!=dp[i].end())
         {
             dp[j][diff]=dp[i][diff]+1;
         }
         else
         dp[j][diff]=2;

         ans=max(ans,dp[j][diff]);
     }
 }
 return ans;
}

