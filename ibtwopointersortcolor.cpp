void Solution::sortColors(vector<int> &A) {
    if(A.size()==0)
    return;

     int n=A.size();
   int cnt=0;
   for(int i=0;i<n;i++){
       if(A[i]!=0)
       continue;
       else{
           swap(A[cnt],A[i]);
           cnt++;
       }
   }
   cnt=n-1;
   for(int i=n-1;i>=0;i--){
       if(A[i]!=2)
       continue;
       else{
           swap(A[cnt],A[i]);
           cnt--;
       }
   }

   //ANOTHER APPROACH//
    //  int one=0,zero=0,two=0;

    // for(int i=0;i<A.size();i++)
    // {
    //     if(A[i]==0)
    //     zero++;
    //     else if(A[i]==1)
    //     one++;
    //     else
    //     two++;
    // }

    // int i=0;

    // if(zero)
    // while(zero--)
    // A[i++]=0;

    // if(one)
    // while(one--)
    // A[i++]=1;

    // if(two)
    // while(two--)
    // A[i++]=2;


    //sort(A.begin(),A.end());
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
