void helper(vector<int> &A,int index,vector<int> &subset,vector<vector<int> > &ans){

    ans.push_back(subset);

    for(int i=index;i<A.size();i++){
        subset.push_back(A[i]);
        helper(A,i+1,subset,ans);
        subset.pop_back();
    }
    return ;
}
vector<vector<int> > Solution::subsets(vector<int> &A) {

    vector<vector<int> > ans;
    vector<int>subset;
    sort(A.begin(),A.end());
    helper(A,0,subset,ans);
    return ans;
}

