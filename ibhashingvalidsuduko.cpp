bool canplace(const vector<string> &A,int n,int row,int col,char currchar)
{
for(int x=0;x<n;x++)
{
    if(x==row || x==col)
        continue;

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
        if(i==row && j==col)
            continue;

        if(A[i][j]==currchar)
        {
            return false;
        }
    }
}
return true;

}
int Solution::isValidSudoku(const vector<string> &A) {
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]!='.')
            {

               bool f=canplace(A,n,i,j,A[i][j]);
               if(f==false)
               return 0;
            }
        }
    }
    return 1;
}
