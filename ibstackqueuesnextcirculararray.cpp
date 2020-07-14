vector<int> Solution::solve(vector<int> &A) {
        vector<int>right;
         stack<int>s2;
     for(int i=A.size()-1;i>=0;i--){
         while( !(s2.empty()) && (s2.top()<=A[i]))
         {
             s2.pop();
         }

         if(s2.empty())
         right.push_back(-1);

         else
         right.push_back(s2.top());

         s2.push(A[i]);
     }

     reverse(right.begin(),right.end());

       vector<int>ans;
        for(int i=0;i<A.size();i++)
           {
               if(right[i]!=-1)
               ans.push_back(right[i]);
               else
               {
                   int v=-1;
                   for(int j=0;j<i;j++)
                   {
                       if(A[j]>A[i])
                       {
                           v=A[j];
                           break;
                       }
                   }
                   ans.push_back(v);
                //   if(left[i]!=-1)
                //   ans.push_back(left[i]);
                //   else
                //   ans.push_back(right[i]);
               }


           }

        return ans;

}

