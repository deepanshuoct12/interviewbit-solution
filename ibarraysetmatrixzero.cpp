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


void setZeroes(vector<vector<int> > &A) {

   set<int>ZerodRows;
set<int> ZeroCols;
for (int i = 0; i< A.size(); ++i)
{
for (int j = 0; j < A[i].size(); ++j)
{

if (A[i][j] == 0 ) //mark
{
   ZeroCols.insert(j);
   ZerodRows.insert(i);
}

}
}

for (int i : ZerodRows)
{
for (int j = 0; j < A[0].size(); ++j)
A[i][j] = 0;

}

for (int j : ZeroCols)
{
for (int i = 0; i < A.size(); ++i)
A[i][j] = 0;

}

}


int32_t main()
{
	fast;
	int r,c;
	cin>>r>>c;
	vector<vector<int> >v;

	for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int x;
            cin>>x;
            v[i].pb(x);
        }
    }

  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
        cout<<v[i][j]<<" ";

      cout<<"\n";
  }
	return 0;
}

