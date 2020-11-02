int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool isvalid(int x,int y,int n,int m)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return false;
    return true;
}
void BFS(int i,int j,vector<string>& vec,int n,int m)
{
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        vec[p.first][p.second]='O';
        for(int i=0;i<4;i++)
        {
            int x=p.first+dx[i];
            int y=p.second+dy[i];

            if(isvalid(x,y,n,m) && vec[x][y]=='X')
            {
                q.push(make_pair(x,y));
            }
        }

    }
}
int Solution::black(vector<string> &A) {
     int n=A.size();
    int m=A[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]=='X')
            {
                ans++;
                BFS(i,j,A,n,m);
            }
        }
    }
    return ans;
}

