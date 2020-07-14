vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

   map<int,int>mp,mp2;
    vector<int>v;
    for(auto x:A)
    {
    if(!(mp2[x]))
      mp[x]++;

      mp2[x]++;
    }

    mp2.clear();

    for(auto x:B)
    {
    if(!(mp2[x]))
      mp[x]++;

      mp2[x]++;
    }

     mp2.clear();

    for(auto x:C)
   {
    if(!(mp2[x]))
      mp[x]++;

      mp2[x]++;
    }

    for(auto x:mp)
   {
    if(x.second>1)
    v.push_back(x.first);
   }


    return v;
}

