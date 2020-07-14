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


vector<int>findPerm(const string A, int B) {
    vector<int>ans;

    if(A[0]=='I')
        ans.push_back(1);
    else
        ans.push_back(0);

      int mx = B;
      int mn = 1;
    for(int i=0;i<A.length()-1;i++)
    {
       if(A[i]=='I')
      {
       if(A[i+1]=='I')
         {    mn++;
             ans.push_back(mn);

         }

         else
         {  mx--;
             ans.push_back(mx);

         }

       }
       else if(A[i]=='D'){

          if(A[i+1]=='D')
          {   mx--
           ans.push_back(mx);
            //   ans.push_back(ans[i-1]-1);
          }
         else {
             mn++;
             ans.push_back(mn);
         }
       }
    }
    return ans;
}

int32_t main()
{
	fast;
	string str;
	int n;
	cin>>str>>n;
    vector<int>v = findPerm(str,n);

    for(auto x:v)
      cout<<x;

	return 0;
}

