vector<int> Solution::dNums(vector<int> &A, int B) {

    map<int,int>mp;
    deque<int>dq;
    vector<int>ans;
    if(B>A.size())
    return ans;

    for(int i=0;i<B;i++)
    {
        dq.push_back(A[i]);
        mp[A[i]]++;
    }
    ans.push_back(mp.size());

    for(int i=B;i<A.size();i++)
    {
       if(mp[dq.front()]>1)
       {
           mp[dq.front()]--;
            //cout<<dq.front()<<":"<<"\n";
       }
       else{
          // cout<<dq.front()<<"\n";
                mp.erase(dq.front());
       }
       dq.pop_front();

       dq.push_back(A[i]);
       mp[A[i]]++;
       ans.push_back(mp.size());
    }

    return ans;
}

