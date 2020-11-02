int cycle(int src,vector<int>graph[],vector<int> &visited,vector<int> &instack)
{
    visited[src]=1;
    instack[src]=1;
    for(auto i:graph[src])
    {
        if(!visited[i])
        {
            if(cycle(i,graph,visited,instack))
            return 1;
        }
        else if(instack[i])
            return 1;

    }
    instack[src]=0;
    return 0;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<int>graph[A+1];
    for(int i=0;i<B.size();i++)
    {
     graph[B[i]].push_back(C[i]);
    }
    vector<int> visited(A+1,0);
    vector<int> instack(A+1,0);
    for(int i=1;i<=A;i++)
    {
        if(!visited[i])
        {
            if(cycle(i,graph,visited,instack))
            return 0;
        }
    }
    return 1;
}

