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

vector<vector<int> > solve(int A) {

    vector<vector<int> >v(A);

    for(int i=0;i<A;i++)
    {
        v[i].resize(i+1,0);
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
           {
               v[i][j]=1;
           }

        else
           v[i][j]=v[i-1][j-1]+v[i-1][j];

        }
    }

    return v;
}

int32_t main()
{
	fast;
	int n;
    cin>>n;
    vector< vector<int> >v = solve(n);

	return 0;
}

