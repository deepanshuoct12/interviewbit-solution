int Solution::diffPossible(const vector<int> &A, int B) {

    unordered_map<int,int>mp;
    for(auto x:A)
     {
         mp[x]++;
         if(B==0 && mp[x]>1)
         return 1;
     }
    if(B==0)
    return 0;
    for(int i=0;i<A.size();i++)
    {
        if(mp[A[i]+B])
        return 1;
    }
    return 0;
}

