void helper(vector<int> adj[],int count,int src,vector<bool> visited,vector<int>& A,int C,int &fans)
{
    visited[src]=true;


    for(auto i:adj[src])
    {
        if(!visited[i])
        {
           if(A[i-1]==1)
           helper(adj,count+1,i,visited,A,C,fans);
           else
           helper(adj,count,i,visited,A,C,fans);
        }
    }
  if(adj[src].size()==1 && count<=C)
  fans++;
}

int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    int n=A.size();
    vector<int> adj[n+1];
    for(int i=0;i<B.size();i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }

    vector<bool> visited(n+1,false);
    int fans=0;

    if(A[0]==1)
     helper(adj,1,1,visited,A,C,fans);
     else
      helper(adj,0,1,visited,A,C,fans);

     return fans;
}

