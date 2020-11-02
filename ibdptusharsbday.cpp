int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    vector<int>a=A;
    vector<int>b=B;
    vector<int>c=C;

    int maxi = *max_element(a.begin(),a.end());
    vector<vector<long long> >dp(b.size()+1,vector<long long>(maxi+1,INT_MAX));

    for(int i=0;i<=b.size();i++){
     dp[i][0] = 0;
    }
  for(int i=1;i<=maxi;i++){
     if(i % b[0] == 0){
     dp[1][i] = (i/b[0])*c[0];
  }
}
 for(int i=2;i<=b.size();i++){
   for(int j=1;j<=maxi;j++){
    if(b[i-1] > j){
        dp[i][j] = dp[i-1][j];
    }
    else {
       dp[i][j] = min(dp[i-1][j],min((c[i-1]+dp[i-1][j-b[i-1]]),(c[i-1]+dp[i][j-b[i-1]])));
    }
  }
}
 int sum=0;
 for(int i=0;i<a.size();i++){
sum += dp[b.size()][a[i]];
 }
 return sum;
 }

