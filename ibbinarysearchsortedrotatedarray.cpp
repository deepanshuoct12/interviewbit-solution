int Solution::search(const vector<int> &A, int B) {

   int s=0,en=A.size()-1;
   while(s<=en){
       int m=(s+en)/2;
       if(A[m]==B)
       return m;

       else if(A[s]<=A[m]){

           if(B>=A[s] && B<=A[m])
           en=m-1;

           else
           s=m+1;
       }

       else
       {
           if(B>=A[m] && B<=A[en])
           s=m+1;

           else
           en=m-1;
       }
   }

   return -1;
}

