vector<int> Solution::twoSum(const vector<int> &A, int B) {

    unordered_map<int,int>mp;
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        if(mp[A[i]])
        {
            v.push_back(mp[A[i]]);
            v.push_back(i+1);
             return v;
        }
        else
        {
            if(!(mp[B-A[i]]))
             {
                 mp[B-A[i]]=i+1;

             }

        }
    }


    return v;
}

