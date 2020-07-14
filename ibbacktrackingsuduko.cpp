bool canplace(vector<vector<char> >&A,int n,int row,int col,int num)
{

char currchar=num+'0';
for(int x=0;x<n;x++)
{
    if(A[row][x]==currchar) return false;
    if(A[x][col]==currchar) return false;
}

int rootn=sqrt(n);
int boxrow=row/rootn;
int boxcol=col/rootn;
int boxcellstartrow=(boxrow)*rootn;
int boxcellstartcol=(boxcol)*rootn;
for(int i=boxcellstartrow;i<boxcellstartrow+rootn;i++)
{
    for(int j=boxcellstartcol;j<boxcellstartcol+rootn;j++)
    {
        if(A[i][j]==currchar)
        {
            return false;
        }
    }
}
return true;
}

bool solve(vector<vector<char> >&A,int n,int row,int col)
{
if(row==n)
{
return true;
}
if(col==n)
{
return solve(A,n,row+1,0);
}

if(A[row][col]!='.')
{
    return solve(A,n,row,col+1);

}

for(int  currnum=1;currnum<=n;currnum++)
{
    if(canplace(A,n,row,col,currnum)==true)
    {
        A[row][col]=currnum+'0';
        bool success=solve(A,n,row,col+1);
        if(success==true) return true;

        A[row][col]='.';

    }
}
return false ;
}

void Solution::solveSudoku(vector<vector<char> > &A) {
int n=A.size();

bool ans=solve(A,n,0,0);
}
