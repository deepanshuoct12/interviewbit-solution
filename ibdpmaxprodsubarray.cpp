int Solution::maxProduct(const vector<int> &A) {

   int currmaxprod=A[0];
   int prevmaxprod=A[0];
   int currminprod=A[0];
   int prevminprod=A[0];
   int ans=A[0];

   for(int i=1;i<A.size();i++)
   {
       currmaxprod=max(A[i],max(prevmaxprod*A[i],prevminprod*A[i]));
       currminprod=min(A[i],min(prevmaxprod*A[i],prevminprod*A[i]));
       ans=max(ans,currmaxprod);
       prevmaxprod=currmaxprod;
       prevminprod=currminprod;
   }
   return ans;
}

