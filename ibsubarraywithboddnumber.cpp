int Solution::solve(vector<int> &A, int B) {

    vector<int>odd(A.size());
    int o=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]%2!=0)
        o++;
        odd[i]=o;
    }
    unordered_map<int,int>mp;
    int ans=0;
    for(int i=0;i<A.size();i++)
      {
          int val=odd[i]-B;
          if(mp[val])
          ans+=mp[val];

          if(B==odd[i])
          ans++;

          mp[odd[i]]++;


      }
    return ans;
}

