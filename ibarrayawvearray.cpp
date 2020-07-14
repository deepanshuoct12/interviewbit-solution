#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
#define test ll t;cin>>t;while(t--)
#define f first
#define s second
#define pb push_back
#define pop pop_back
#define int long long int
#define mod 1000000007
#define inf 1LL<<60


vector<int>wave(vector<int> &A) {

    sort(A.begin(),A.end());

    for(int i=0;i<A.size();i+=2)
    {
        if(i+1>=A.size())
         break;
        swap<int>(A[i],A[i+1]);
    }

    return A;
}


int32_t main()
{
	fast;
	int n;
     cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
        cin>>v[i];

    v= wave(v);
	return 0;
}

