void helper(vector<int> &A,int i,vector<vector<int> > &ans,int n)
{
    if(i==n)
    {
        ans.push_back(A);
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(A[i],A[j]);
        helper(A,i+1,ans,n);
        swap(A[i],A[j]);
    }
    return;
}
vector<vector<int> > Solution::permute(vector<int> &A) {

     vector<vector<int> > ans;
     helper(A,0,ans,A.size());
     return ans;
    // vector<int>B=A;
    // sort(B.begin(),B.end());
    // ans.push_back(B);
    // while(next_permutation(B.begin(),B.end()))
    // {
    //     ans.push_back(B);
    // }
    // return ans;
}

