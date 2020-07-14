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

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {

   int n = arrive.size();
   unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;

    for(int i=0;i<n;i++)
    {
        mp1[arrive[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        mp2[depart[i]]++;
    }

    vector<int>ans(2*arrive.size());
     sort(arrive.begin(),arrive.end());
     sort(depart.begin(),depart.end());

    merge(arrive.begin(),arrive.end(),depart.begin(),depart.end(),ans.begin());

    int c =0;
    for(int i=0;i<ans.size();i++)
    {
        if(mp1[ans[i]])
          {
              c++;
              mp[ans[i]]--;
          }

        if(mp2[ans[i]])
          {
              c--;
              mp[ans[i]]--;
          }

       if(c>K)
       return 0;
    }

    return 1;


}

int32_t main()
{
	fast;
	int n;
     cin>>n;
     vector<int>a(n);

     for(int i=0;i<n;i++)
        cin>>a[i];

     vector<int>d(n);
     for(int i=0;i<n;i++)
        cin>>d[i];

        int k;
        cin>>k;

        cout<<hotel(a,d,k)<<"\n";
	return 0;
}

