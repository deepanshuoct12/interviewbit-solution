vector<int> Solution::solve(vector<int> &A, int B) {
      priority_queue<int,vector<int> > maxheap;
      unordered_map<int,int>mp;

      for(auto x:A)
         maxheap.push(x);

      for(int i=0;i<A.size();i++ )
      mp[A[i]]=i;

      vector<int> ans=A;
      int i=0;
       while(B && i!=A.size())
       {
           int maxidx=mp[maxheap.top()];
           maxheap.pop();

           if(i<maxidx)
          {
              int temp=ans[i];
              ans[i]=ans[maxidx];
              ans[maxidx]=temp;

              mp[ans[maxidx]]=maxidx;
              mp[ans[i]]=i;
            B--;
          }

         if(maxheap.empty())
           break;

           i++;


       }

       return ans;
}

