void helper(vector<int>& A,int sum,vector<vector<int> >& ans,vector<int>& subset,int index)
 {
    if(sum<0)
    return;

    if(sum==0)
    ans.push_back(subset);

    for(int i=index;i<A.size();i++){
        subset.push_back(A[i]);
        helper(A,sum-A[i],ans,subset,i);
        subset.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {

    vector<vector<int> >ans;
    vector<int>subset;

    sort(A.begin(),A.end());
     A.erase(unique(A.begin(), A.end()), A.end());
    helper(A,B,ans,subset,0);

    return ans;
}

