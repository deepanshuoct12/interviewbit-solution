void helper(vector<int> &A,int index,vector<int> &subset,vector<vector<int> > &ans,map<vector<int>,int>  &mp)
{
    if(!(mp[subset]))
    {
        ans.push_back(subset);
        mp[subset]++;
    }

    for(int i=index;i<A.size();i++){
        subset.push_back(A[i]);
        helper(A,i+1,subset,ans,mp);
        subset.pop_back();
    }
    return ;
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
      vector<vector<int> > ans;
    vector<int>subset;
    sort(A.begin(),A.end());
    map<vector<int> ,int > mp;
    helper(A,0,subset,ans,mp);
    return ans;
}


vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
      vector<vector<int> > ans;
    vector<int>subset;
    sort(A.begin(),A.end());
    map<vector<int> ,int > mp;
    helper(A,0,subset,ans,mp);
    return ans;
}
//BETTERAPPROACH
/*
void helper(vector<int> &A,int index,vector<int> &subset,vector<vector<int> > &ans)
{
        ans.push_back(subset);

    for(int i=index;i<A.size();i++){
        if(i!=index && A[i]==A[i-1])
        continue;

        subset.push_back(A[i]);
        helper(A,i+1,subset,ans);
        subset.pop_back();
    }
    return ;
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
      vector<vector<int> > ans;
    vector<int>subset;
    sort(A.begin(),A.end());

    helper(A,0,subset,ans);
    return ans;
}
*/
