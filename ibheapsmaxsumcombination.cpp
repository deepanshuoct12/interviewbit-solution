vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {

    priority_queue<pair<int,pair<int,int> > >pq;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    set<pair<int,int> >s;
    int n=A.size();
    pq.push(make_pair(A[n-1]+B[n-1],make_pair(n-1,n-1)));
    s.insert(make_pair(n-1,n-1));
    vector<int>ans;
    for(int count =0;count<C;count++)
    {
       pair<int,pair<int,int> >temp=pq.top();
       pq.pop();

        ans.push_back(temp.first);

        int i=temp.second.first;
        int j=temp.second.second;

        int sum=A[i-1]+B[j];
        pair<int,int>temp1;
        temp1=make_pair(i-1,j);

        if(s.find(temp1)==s.end())
        {
            pq.push(make_pair(sum,temp1));
             s.insert(temp1);
         }


        sum=A[i]+B[j-1];

        temp1=make_pair(i,j-1);

        if(s.find(temp1)==s.end())
         {
             pq.push(make_pair(sum,temp1));
             s.insert(temp1);
         }

    }

    return ans;
    // int i=A.size()-1,j=B.size()-1;
    // while(i>=0 && j>=0)
    // {
    //     pq.push(A[i]+B[j]);
    //     if(j!=0)
    //     pq.push(A[i]+B[j-1]);
    //     if(i!=0)
    //     pq.push(A[i-1]+B[j]);
    //     i--;
    //     j--;
    // }
    // vector<int>ans;
    //  while(C--)
    //  {
    //      ans.push_back(pq.top());
    //      pq.pop();

    //  }

    // return ans;
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<B.size();j++)
    //     {
    //         pq.push(A[i]+B[j]);
    //     }
    // }
    // vector<int>v;
    // while(C--)
    // {
    //     v.push_back(pq.top());
    //     pq.pop();
    // }
    // return v;
}

