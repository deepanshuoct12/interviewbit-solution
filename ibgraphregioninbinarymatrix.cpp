int dx[]={1,-1,0,0,-1,1,1,-1};
int dy[]={0,0,1,-1,-1,1,-1,1};

int isvalid(int x,int y,int n,int m)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return 0;
    return 1;
}

int bfs(int i,int j,int n,int m,vector<vector<int> >& A)
{
    queue<pair<int,int> > q;

    q.push(make_pair(i,j));
    int cnt=1;

    while(!q.empty())
    {
        pair<int,int> curr=q.front();

        q.pop();

        A[curr.first][curr.second]=0;

        for(int i=0;i<8;i++)
        {
            int x=curr.first+dx[i];
            int y=curr.second+dy[i];
            if(isvalid(x,y,n,m) && A[x][y]==1)
            {
                q.push(make_pair(x,y));
                A[x][y]=0;
                cnt++;
            }
        }
    }
    return cnt;
}

int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==1)
            {

              int val=bfs(i,j,n,m,A);

              if(val>ans)
              ans=val;
            }
        }
    }

    return ans;
}

