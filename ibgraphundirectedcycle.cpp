// #include<bits/stdc++.h>
// int helper(int src,map<int,list<int> > &graph,map<int,bool> & visited,int parent)
// {
//     visited[src]=true;

//     for(auto nbr:graph[src])
//     {
//         if(!visited[nbr])
//         {
//             int ans=helper(nbr,graph,visited,src);
//             if(ans)return 1;
//         }
//         else if(visited[nbr] && parent!=nbr)
//         return 1;
//     }
//     return 0;
// }
// int Solution::solve(int A, vector<vector<int> > &B) {

//     map<int,list<int> >graph;
//     int m=B[0][0];
//     for(int i=0;i<B.size();i++)
//     {
//         graph[B[i][0]].push_back(B[i][1]);
//         graph[B[i][1]].push_back(B[i][0]);

//         m=min(m,min(B[i][0],B[i][1]));
//     }
//     map<int ,bool>visited;

//       for(auto i:graph)
//          {
//              int node = i.first;
//              if(!visited[node])
//              {
//                  int ans =helper(node,graph,visited,node);
//                  if(ans)
//                     return 1;
//              }
//          }
//     return 0;
// }
bool dfs(int i,vector<int> adj[],vector<bool> &visited,int parent)
{
    visited[i]=true;
    for(auto x : adj[i])
    {
        if(x != parent  && visited[x])
        return true;
        if(!visited[x]&&dfs(x,adj,visited,i))
        return true;
    }
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    vector<bool> visited(A+1,false);
    for(int i=0;i<B.size();i++)
        adj[B[i][0]].push_back(B[i][1]),adj[B[i][1]].push_back(B[i][0]);
    for(int i=1;i<=A;i++)
        if(!visited[i]&&dfs(i,adj,visited,-1)) return 1;
    return 0;
}
