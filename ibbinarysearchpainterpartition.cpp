#include<bits/stdc++.h>
using namespace std;
#define mod 10000003
// bool isPossible(int A, int B, vector<int> &C,long long int X){
//     int n=C.size();
//   long long int t=X;
//     int i=0,cnt=1;
//     while(i<n){
//         if(cnt>A)
//          return false;
//         if(C[i]>t){
//             cnt++;
//             t=X;
//         }
//         else{
//             t=t-C[i];
//             i++;
//         }
//     }
//     return true;
// }

// int Solution::paint(int A, int B, vector<int> &C) {
//     int n=C.size();
//     long long int sum=0;
//     for(int i=0;i<n;i++)
//      sum=sum%10000003+C[i]%10000003;
//     long long int low=0,high=sum*B;
//     long long int ans=high%10000003;
//     while(low<=high){
//         //cout<<low<<" "<<high<<" "<<ans<<endl;
//         long long int mid=low+(high-low)/2;
//         if(isPossible(A,B,C,mid/B)){
//           // cout<<"Hi\n";
//             ans=mid%10000003;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     return ans%10000003;
// }

bool check(int x,int n,int B,int k,vector<int>&C) {
    long long int given = 0, painters = 1;
    for (int i = 0; i < n; i++) {
        given = (given+C[i])%mod;
      //  given = (given+(C[i]*B)%mod)%mod;
        if (given > x) {
            painters++;
            given = C[i];
        }
    }
    return painters <= k;
}

int paint(int A, int B, vector<int> &C) {
  long long int k = A;
  long long int n = C.size();
     int sum=0;
     int mx = -1;
        for (int i = 0; i < n; i++) {
            mx = max(mx, C[i]);
            sum = (sum%mod + C[i]%mod)%mod;
        }
        long long int lf = mx, rt = sum;
   //  long long int lf = (mx*B)%mod, rt = (sum*B)%mod;
        while (lf < rt) {
            int mid = (lf + rt) / 2;
            if (check(mid,n,B,k,C)) {
                rt = mid;
            }
            else {
                lf = mid + 1;
            }
        }
      //  return lf%mod;
        return (lf*B)%mod;

}
int main()
{

    return 0;
}
