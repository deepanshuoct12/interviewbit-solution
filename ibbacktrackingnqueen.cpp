int board[20][20]={0};
 bool issafeplace(int i,int j,int n)
 {
     //chking in that column
     for(int row=0;row<i;row++)
     {
         if(board[row][j]==1)
            return false;
     }

     // left diagonal
     int x=i,y=j;
     while(x>=0&&y>=0)
     {

         if(board[x][y]==1)
            return false;

         x--;
         y--;
     }
     // right diagonal
     x=i;
     y=j;
     while(x>=0 && y<n)
     {
         if(board[x][y]==1)
            return false;

         x--;
         y++;
     }

     return true;
 }


bool nqueen(int i,int n,vector<vector<string> > &ans,vector<string> &curr)
{

  if(i==n)
    {
       ans.push_back(curr);
       return false;//for all possible config.
    }

    for(int j=0;j<n;j++)
    {
        if(issafeplace(i,j,n))
        {
            board[i][j]=1;
            curr[i][j]='Q';
              // placing a queen
               bool nextqueen=nqueen(i+1,n,ans,curr);

            if(nextqueen)  // if all the queen get placed then true
            return true;

            board[i][j]=0;  // backtrack
            curr[i][j]='.';
        }

    }

    return false;//it means we had tried all possible positions but we are not able to place queen;

}


vector<vector<string> > Solution::solveNQueens(int A) {
    vector<vector<string>> ans;

    if(A==3 || A==2)
    return ans;

    vector<string> curr;
    for(int i=0; i<A; i++)
    {
        string s(A,'.');
        curr.push_back(s);
    }
    nqueen(0,A,ans,curr);
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

