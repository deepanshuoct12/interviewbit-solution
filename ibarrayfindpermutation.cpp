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
      int mx = B;
      int mn = 1;
    if(A[0]=='I')
        {
            ans.push_back(mn);
            mn++;
        }
    else
       {
           ans.push_back(mx);
           mx--;

       }


    for(int i=0;i<A.length()-1;i++)
    {
       if(A[i]=='I')
      {
       if(A[i+1]=='I')
         {
             ans.push_back(mn);
              mn++;
         }

         else
         {
             ans.push_back(mx);
             mx--;
         }

       }
       else if(A[i]=='D'){

          if(A[i+1]=='D')
          {
           ans.push_back(mx);
           mx--;
            //   ans.push_back(ans[i-1]-1);
          }
         else {
             ans.push_back(mn);
              mn++;
         }
       }
    }

    unordered_map<int,int>mp;

    for(int i=1;i<=B;i++)
    mp[i]=0;

    for(auto x:ans)
    mp[x]=1;

    for(auto x:mp)
    {
        if(x.second ==0)
        {
            ans.push_back(x.first);
            break;
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
