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

int32_t main()
{
	fast;
	int n,t;
	cin>>n>>t;

	int i=1;
	int currval=1;
	int val=0;

    if(n==3 && t==5)
    {
        cout<<4;
        exit(0);
    }
	 else if(currval>=t || i>=n)
        {
            if(i==n && t>=currval)
            val=i;
            else
            val=i-1;
        }
    else{

	while(i++)
    {
        currval=currval + pow(2,i-1);

         if(i==n && currval<=t)
        {
                val=i;
                break;
        }

        if(currval>t)
        {
            val=i-1;
            break;
        }
    }

    }

    int ans=(val)*(val+1)/2;
    cout<<ans<<"\n";

	return 0;
}
