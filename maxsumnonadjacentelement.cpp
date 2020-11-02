int Solution::adjacent(vector<vector<int> > &A) {

    int inc=A[0];
    int exc=0;
    for(int i=1;i<A[0].size();i++)
    {
        int temp=inc;
      inc=max(inc,exc+A[0]);
      exc=temp;
    }
    return max(inc,exc);
}

