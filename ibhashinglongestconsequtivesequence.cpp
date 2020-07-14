vector<int> Solution::lszero(vector<int> &A) {

        unordered_map<int,int>mp;
      int pref=0;
      int j,end;
      int len=INT_MIN,start=0;
      int n=A.size();
       vector<int>v;

      if(n==0)
      return v;

      for(int i=0;i<n;i++){
        pref+=A[i];

        if(pref==0)
         {
             if(i+1>len)
             {  len=i+1;
               end=i;
               start=0;
              }
         }

       else if(mp.find(pref)!=mp.end())
        {
            if(i-mp[pref]>len)
             {
              len=i-mp[pref];
              start=mp[pref]+1;
              end=i;

             }
        }
        else
            mp[pref]=i;
      }


      if(len==1)
      {
          v.push_back(0);
          return v;

      }

      if(len==INT_MIN)
      return v;

      for(int i=start;i<=end;i++)
       v.push_back(A[i]);

    return v;
}

