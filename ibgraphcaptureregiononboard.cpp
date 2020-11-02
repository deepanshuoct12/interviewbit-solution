// int dx[]={1,-1,0,0};
// int dy[]={0,0,1,-1};
// bool isvalid(int i,int j,vector<vector<char> >& A)
// {

//     return (i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&(A[i][j]=='O');
// }
// void dfs(vector<vector<char> >& A,int i,int j)
// {

//     A[i][j]='+';

//     for(int k=0;k<4;i++)
//     {
//         int x=i+dx[k];
//         int y=j+dy[k];
//         if(isvalid(x,y,A))
//         dfs(A,x,y);
//     }

// }
// void Solution::solve(vector<vector<char> > &A) {

//     int row=A.size();
//     int col=A[0].size();

//      for(int i=0;i<row;i++)
//      {
//       if(A[i][0]=='O')
//       dfs(A,i,0);
//       if(A[i][col-1]=='O')
//       dfs(A,i,col-1);
//      }
//       for(int i=0;i<col;i++)
//      {
//       if(A[0][i]=='O')
//       dfs(A,0,i);
//       if(A[row-1][i]=='O')
//       dfs(A,row-1,i);
//      }

//      for(int i=0;i<row;i++)
//      {
//          for(int j=0;j<col;j++)
//          {
//              if(A[i][j]=='+')
//              A[i][j]='O';
//              else
//              A[i][j]='X';
//          }
//      }
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
// }
vector<pair<int,int>> steps={make_pair(1,0),make_pair(0,-1),make_pair(-1,0),make_pair(0,1)};
bool isSafe(int i,int j,vector<vector<char> > &A)
{
    return (i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&(A[i][j]=='O');
}
void dfs(int i,int j,vector<vector<char> > &A)
{
    A[i][j]='+'; //dummy symbol
    for(int k=0;k<4;k++)
        if(isSafe(i+steps[k].first,j+steps[k].second,A))
            dfs(i+steps[k].first,j+steps[k].second,A);
}
void Solution::solve(vector<vector<char> > &A) {
    int r=A.size(),c=A[0].size();
    for(int j=0;j<c;j++){ //checking boundaries only
        if(A[0][j]=='O') dfs(0,j,A);
        if(A[r-1][j]=='O') dfs(r-1,j,A); }

    for(int i=0;i<r;i++){ //checking boundaries only
        if(A[i][0]=='O') dfs(i,0,A);
        if(A[i][c-1]=='O') dfs(i,c-1,A); }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]=='+') A[i][j]='O'; //replacing dummy symbol
            else A[i][j] = 'X';
        }
    }
}
