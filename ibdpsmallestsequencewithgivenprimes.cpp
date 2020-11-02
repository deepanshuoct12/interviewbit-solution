// int maxdivide(int a,int b){

//     while(a%b==0)
//     a/=b;
//     return a;
// }
// bool uglyno(int n,int A,int B,int C)
// {
//     n=maxdivide(n,A);
//     n=maxdivide(n,B);
//     n=maxdivide(n,C);

//     return (n==1)?1:0;

// }
vector<int> Solution::solve(int A, int B, int C, int D) {

    int ia=0,ib=0,ic=0;
    vector<int>ugly(D+1);

    ugly[0]=1;
    for(int i=1;i<D+1;i++)
    {
        int nxma=ugly[ia]*A;
        int nxmb=ugly[ib]*B;
        int nxmc=ugly[ic]*C;

         int m=min(nxma,min(nxmb,nxmc));
         ugly[i]=m;

         if(m==nxma)
         ia++;
         if(m==nxmb)
         ib++;
         if(m==nxmc)
         ic++;

    }
    ugly.erase(ugly.begin());

    return ugly;
//     vector<int>ans;
//     int i=1,cnt=1;
//   //  ans.push_back(i);
//     while(D>=cnt)
//     {
//         i++;
//         if(uglyno(i,A,B,C))
//         {
//             ans.push_back(i);
//             cnt++;
//         }
//     }

//     return ans;
}
N
