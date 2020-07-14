#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int hammingDistance(const vector<int> &A) {

     long long int ans = 0;  // Initialize result

    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        long long int count = 0;
        for (int j = 0; j < A.size(); j++)
            if ( (A[j] & (1 << i)) )
                count++;

        // Add "count * (n - count) * 2" to the answer
        ans += ((count%mod)*((A.size() - count)%mod)*(2LL%mod))%mod;
    }

    return int(ans%mod);
    // int xorsum=0;
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<A.size();j++)
    //      {
    //          if(i==j)
    //          continue;

    //         int cnt=0;
    //       int N = A[i]^A[j];
    //       while(N>0)
    //      {

    //       cnt+=(N&1);
    //          N=N>>1;

    //      }
    //         xorsum +=cnt;

    //     }
    // }

    // return xorsum%mod;
}
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<hammingDistance(v);
}

