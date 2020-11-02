int zeroes(vector<int> &temp)
{
        int prefix=0;
        int c=0;
         unordered_map<int,int> mp;
         for(int i=0;i<temp.size();i++)
         {
             prefix+=temp[i];

            if(prefix==0)
            c++;
            if(mp.find(prefix)!=mp.end())
            c+=mp[prefix];

              mp[prefix]++;
         }

        return c;
}

int Solution::solve(vector<vector<int> > &A) {

 int rows = A.size();
 int cols=A[0].size();
 int ans=0;

 if(rows==0 || cols==0)
 return 0;

 for(int left=0;left<cols;left++)
 {
     vector<int>temp(rows,0);
     for(int right=left;right<cols;right++)
     {
         for(int k=0;k<rows;k++)
         temp[k]+=A[k][right];

        ans+=zeroes(temp);
     }
 }
 return ans;

}

