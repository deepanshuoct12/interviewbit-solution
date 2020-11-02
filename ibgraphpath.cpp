int helper(vector<int> adj[],int src,int end,vector<bool> &visited)
{
    visited[src]=true;
    if(visited[end]==true)
    return 1;
    for(auto i:adj[src])
    {
        if(!visited[i])
        {
           if(helper(adj,i,end,visited))
           return 1;
        }
    }
    return 0;
}

int Solution::solve(int A, vector<vector<int> > &B)
{
    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }
    vector<bool> visited(A+1,false);
    if(helper(adj,1,A,visited))
    return 1;
    return 0;
}

