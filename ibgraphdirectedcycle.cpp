int helper(int src,vector<int> adj[],vector<bool> &visited,vector<bool> &instack)
{
    visited[src]=true;
    instack[src]=true;

    for(auto nbr:adj[src])
    {
        if(!visited[nbr])
        {
            if(helper(nbr,adj,visited,instack))
            return 1;
        }
        else if(instack[nbr])
        return 1;
    }
    instack[src]=false;
    return 0;
}
int Solution::solve(int A, vector<vector<int> > &B) {

    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++)
        adj[B[i][0]].push_back(B[i][1]);

    vector<bool> visited(A+1,false);
    vector<bool> instack(A+1,false);

    for(int i=1;i<=A;i++)
    {
        if(!visited[i])
         {
             int ans=helper(i,adj,visited,instack);
             if(ans==1)
             return 1;
         }
    }
  return 0;
}

