vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    int row=B.size();
    int col=B[0].size();

    vector<vector<int> > currmatrix = B;
    vector<vector<int> > nextmatrix = currmatrix;

    for(int k=0;k<A;k++)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int curr = currmatrix[i][j];

                int up=(i==0)?-1:currmatrix[i-1][j];
                int down=(i==row-1)?-1:currmatrix[i+1][j];
                int left=(j==0)?-1:currmatrix[i][j-1];
                int right=(j==col-1)?-1:currmatrix[i][j+1];


                nextmatrix[i][j] = max(max(max(curr,up),max(down,left)), right );
            }
        }

        currmatrix=nextmatrix;
    }

    return nextmatrix;
}

