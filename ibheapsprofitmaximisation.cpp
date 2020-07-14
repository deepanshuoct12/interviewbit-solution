int Solution::solve(vector<int> &A, int B) {

  priority_queue<int>pq;
  for(int i=0;i<A.size();i++)
  {
      pq.push(A[i]);
  }
    int ans=0;
    while(B--)
    {
        int v=pq.top();
       // cout<<v<<"\n";
        pq.pop();
        ans+=v;
        v--;
        if(v<0)
        break;
        pq.push(v);

    }

    return ans;
}
