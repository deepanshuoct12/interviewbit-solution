int dx[]={1,-1,0,0,-1,1,1,-1};
int dy[]={0,0,1,-1,-1,1,-1,1};

int isvalid(int x,int y,int n,int m)
{
    if(x<0 || x>n || y<0 || y>m)
    return 0;
    return 1;
}

int bfs(int i,int j,int n,int m,vector<vector<int> >& rect)
{
    queue<pair<int,int> > q;

    q.push(make_pair(i,j));

    while(!q.empty())
    {
        pair<int,int> curr=q.front();

        q.pop();
        if(curr.first==n && curr.second==m)
        return 1;

        rect[curr.first][curr.second]=0;

        for(int i=0;i<8;i++)
        {
            int x=curr.first+dx[i];
            int y=curr.second+dy[i];
            if(isvalid(x,y,n,m) && rect[x][y]==1)
            {
                q.push(make_pair(x,y));
                rect[x][y]=0;

            }
        }
    }
    return 0;
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {

    vector<vector<int> > rect(A+1,vector<int>(B+1));
    for(int i=0;i<=A;i++)
    {
        for(int j=0;j<=B;j++)
        rect[i][j]=1;
    }

float dist;
for(int i=0;i<=A;i++)
{
    for(int j=0;j<=B;j++)
    {
        for(int k=0;k<C;k++)
        {
            int x = E[k];
            int y = F[k];
            dist = pow((x-i),2)+pow((y-j),2);
            dist = pow(dist,0.5);
            if(dist <= D) rect[i][j] = 0;
        }
    }
}
    // for(int i=0;i<C;i++)
    // {
    //   rect[E[i]][F[i]]=0;
    //     int x=E[i];
    //     int y=F[i];
    //     for(int j=0;j<8;j++)
    //   {
    //       for(int r=0;r<D;r++)
    //       {
    //           x=E[i]+dx[j]+r;
    //           y=F[i]+dy[j]+r;
    //           if(isvalid(x,y,A,B))
    //           rect[x][y]=0;
    //       }

    //   }
    // }

    // for(int i=0;i<=A;i++)
    // {
    //     for(int j=0;j<=B;j++)
    //       cout<<rect[i][j]<<" ";
    //       cout<<"\n";
    // }

 //   cout<<"\n";

    if(bfs(0,0,A,B,rect))
    return "YES";
    return "NO";

}
N
