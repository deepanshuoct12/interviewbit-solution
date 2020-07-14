int Solution::solve(vector<int> &A, int B) {
  vector<int> xorarr(A.size());
  xorarr[0]=A[0];
  for(int i=1;i<A.size();i++)
  {
      xorarr[i]=xorarr[i-1]^A[i];
  }
  int ans=0;
  unordered_map<int,int>mp;
  for(int i=0;i<A.size();i++)
  {
      int m = xorarr[i]^B;

      if(mp[m]){

          ans+=mp[m];
      }

      if(xorarr[i]==B)
       ans++;

      mp[xorarr[i]]++;

  }

  return ans;
}

