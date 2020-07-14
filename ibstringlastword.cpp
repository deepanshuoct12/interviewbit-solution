int Solution::lengthOfLastWord(const string A) {


    int n = A.size();
if(n==0)
{
    return 0;
}
int i=n-1;
int ans = n;
while(A[i]==' ')
{
    i--;
}
int count =0;
while(A[i]!=' ' && i>=0)
{
    count++;
    i--;
}
return count;
    // if(A.length()==0)
    // return A.length();

    // int idx=0;
    // int idx2=0;
    // for(int i=0;i<A.length();i++)
    // {
    //     if(A[i]==' ')
    //       idx=i;

    //       else
    //       idx2=i;
    // }


    // if(idx==0)
    // return A.length();

    // if(idx==A.length()-1)
    // {  int i;
    //     for(i=idx2;i>=0;i--)
    //     {
    //         if(A[i]==' ')
    //           break;
    //     }

    //     return (idx2-i);
    // }

 }

