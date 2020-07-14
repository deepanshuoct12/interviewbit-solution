int Solution::compareVersion(string A, string B) {
     long double i=0,j=0;
     string sa,sb;
     vector<long double >va,vb;
     long double a=0,b=0;
     for(long double  i=0;i<A.length();i++)
     {
         if(A[i]!='.')
         sa+=A[i];

         else
         {

             a =stold(sa);
             va.push_back(a);
             sa="";

         }
     }

     va.push_back(stold(sa));

    for(int i=0;i<B.length();i++)
    {
         if(B[i]!='.')
         sb+=B[i];

         else
         {
             b =stold(sb);
             vb.push_back(b);
             sb="";

         }
     }

      vb.push_back(stold(sb));

      if(va.size()>=vb.size())
      {
          for(long double i=0;i<va.size();i++)
          {
              if(i==vb.size()&&va[i]!=0)
                return 1;

              if(va[i]>vb[i])
                 return 1;
              if(va[i]<vb[i])
                 return -1;
          }

      }

      else  {

          for(long double  i=0;i<vb.size();i++)
          {
                if(i==va.size()&&vb[i]!=0)
                  return -1;

              if(va[i]>vb[i])
                 return 1;
              if(va[i]<vb[i])
                 return -1;
          }

      }

 return 0;

}
