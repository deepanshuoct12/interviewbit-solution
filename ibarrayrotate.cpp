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

void solve(vector<vector<int> >&matrix)
{
    int len = matrix.size();
        if(len==1||len==0) return ;

        for (int i = 0; i < len / 2; i++) {
            for (int j = i; j < len - i - 1; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[len - j - 1][i];
            matrix[len - j - 1][i] = matrix[len - i - 1][len - j - 1];
            matrix[len - i - 1][len - j - 1] = matrix[j][len - i - 1];
            matrix[j][len - i - 1] = tmp;
            }
        }
}
int32_t main()
{
	fast;
	int n;
  cin>>n;
  vector<vector<int> >v(n,vector<int>(n));
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
        cin>>v[i][j];
  }

  solve(v);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
        cout<<v[i][j]<<" ";

        cout<<"\n";
  }
	return 0;
}

