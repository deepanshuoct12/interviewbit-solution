pair<int,int> bfs(int u,vector<int> graph[],int n)
{
     vector<int> dist(n);
  for(int i=0;i<n;i++)
    dist[i]=-1;

    queue<int>q;
    q.push(u);
    dist[u]=0;
    pair<int,int> p;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(auto x:graph[curr])
        {
            if(dist[x]==-1)
            {
                q.push(x);
                dist[x]=dist[curr]+1;
            }
        }
        p.first=curr;
        p.second=dist[curr];
    }
    return p;

}
int Solution::solve(vector<int> &A) {
    int root;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==-1)
        {
            root=i;
            break;
        }
    }
    vector<int>graph[A.size()];
   for(int i=0;i<A.size();i++)
   {
       if(i==root)
       continue;

       graph[i].push_back(A[i]);
       graph[A[i]].push_back(i);
   }
   int n=A.size();
    pair<int,int>t1,t2;
     t1=bfs(root,graph,n);
    t2=bfs(t1.first,graph,n);

    return t2.second;
}

