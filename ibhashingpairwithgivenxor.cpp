int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,bool>mp;

    int c=0;
    for(int i=0;i<A.size();i++)
    {
        if(mp[(A[i]^B)])
        c++;
        else
         mp[A[i]]=true;
    }
    return c;
}

