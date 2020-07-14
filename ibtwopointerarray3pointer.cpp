// int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

//   int ans = INT_MAX;

//     if(A.size()==1 && B.size()==1 && C.size()==1)
//   {
//       int a = A[0],b=B[0],c=C[0];
//         ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));
//         return ans;
//   }

//   for(int i=0;i<A.size();i++)
//   {
//       int a = A[i];
//       int st = 0,en=B.size()-1;
//       int b=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(B[m]<=a)
//           {
//               b=B[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=C.size()-1;
//       int c=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(C[m]<=a)
//           {
//               c=C[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//       if(b!=-1 && c!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }

//   for(int i=0;i<B.size();i++)
//   {
//       int b = A[i];
//       int st = 0,en=B.size()-1;
//       int a=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(A[m]<=b)
//           {
//               a=B[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=C.size()-1;
//       int c=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(C[m]<=b)
//           {
//               c=C[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//       if(a!=-1 && c!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }

//     for(int i=0;i<C.size();i++)
//   {
//       int c = C[i];
//       int st = 0,en=B.size()-1;
//       int b=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(B[m]<=c)
//           {
//               b=B[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=A.size()-1;
//       int a=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(A[m]<=c)
//           {
//               a=C[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//       if(b!=-1 && a!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }
//   return ans;
// }

// int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

//   int ans = INT_MAX;

//   if(A.size()==1 && B.size()==1 && C.size()==1)
//   {
//       int a = A[0],b=B[0],c=C[0];
//         ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));
//         return ans;
//   }


//   for(int i=0;i<A.size();i++)
//   {
//       int a = A[i];
//       int st = 0,en=B.size()-1;
//       int b=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(a<=B[m])
//           {
//               b=B[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=C.size()-1;
//       int c=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(a<=C[m])
//           {
//               c=C[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }


//       if(b!=-1 && c!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }

//   for(int i=0;i<B.size();i++)
//   {
//       int b = A[i];
//       int st = 0,en=B.size()-1;
//       int a=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(b<=A[m])
//           {
//               a=A[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=C.size()-1;
//       int c=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(b<=C[m])
//           {
//               c=C[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }



//       if(a!=-1 && c!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }

//     for(int i=0;i<C.size();i++)
//   {
//       int c = C[i];
//       int st = 0,en=B.size()-1;
//       int b=-1;
//       while(st<en)
//       {
//           int m=(st+en)/2;
//           if(c<=B[m])
//           {
//               b=B[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }

//         st = 0,en=A.size()-1;
//       int a=-1;
//         while(st<en)
//       {
//           int m=(st+en)/2;
//           if(c<=A[m])
//           {
//               a=A[m];
//               en=m-1;
//           }
//           else
//           st=m+1;

//       }



//       if(b!=-1 && a!=-1)
//       ans= min(ans,max(abs(a - b), max(abs(b - c),abs(c - a)) ));

//   }
//   return ans;
// }

// int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
// int j=0;
// int k=0;
// int i=0;
// int ans=INT_MAX;
// int mina;
// while(i<A.size()&&j<B.size()&&k<C.size())
// {mina=max(max(abs(A[i]-B[j]),abs(A[i]-C[k])),abs(B[j]-C[k]));
// if(mina<ans)
// ans=mina;
// if(A[i]>=B[j]&&B[j]<=C[k])
// j++;
// else if(A[i]<=B[j]&&A[i]<=C[k])
// i++;
// else if(C[k]<=A[i]&&C[k]<=B[j])
// k++;
// }
// return ans;
// }

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int diff = INT_MAX;  // Initialize min diff

    // Initialize result
    int res_i =0, res_j = 0, res_k = 0;

    // Traverse arrays
    int i=0,j=0,k=0;
    int p = A.size(),q = B.size(), r = C.size();
    while (i < p && j < q && k < r)
    {
        // Find minimum and maximum of current three elements
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));

        // Update result if current diff is less than the min
        // diff so far
        if (maximum-minimum < diff)
        {
             res_i = i, res_j = j, res_k = k;
             diff = maximum - minimum;
        }

        // We can't get less than 0 as values are absolute
        if (diff == 0) break;

        // Increment index of array with smallest value
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
}

    return diff;
}

