void helper(int A,int B,int left,vector<vector<int> >& ans,vector<int>& temp){

    if(B==0)
    {
        ans.push_back(temp);
        return;
    }

    for(int i=left;i<=A;i++)
    {
        temp.push_back(i);
        helper(A,B-1,i+1,ans,temp);
        temp.pop_back();
    }
    return;
}

vector<vector<int> > Solution::combine(int A, int B) {

    vector<vector<int> >ans;
    vector<int>temp;
    helper(A,B,1,ans,temp);
    return ans;
}

