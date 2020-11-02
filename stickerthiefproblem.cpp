int Solution::adjacent(vector<vector<int> > &A) {

    int inc=max(A[0][0],A[1][0]);
    int exc=0;
    for(int i=1;i<A[0].size();i++)
    {
        int temp=inc;
      inc=max(inc,exc+max(A[0][i],A[1][i]));
      exc=temp;
    }
    return max(inc,exc);
}

