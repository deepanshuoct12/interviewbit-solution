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


int solve(vector<int>&v)
{

    int n = v.size();

    int sq  = sqrt(n);

    int range = n/sq + 1;

    int count[range]= {0};

    for(int i=0;i<n;i++)
    {
        count[(v[i]-1)/sq]++;
    }

    int selected = range - 1;
    for(int i=0;i<range-1;i++)
     {

         if(count[i]>sq)
         {
             selected = i;
             break;
         }
     }

     unordered_map<int,int>mp;

     for(int i=0;i<n;i++)
     {
         if(selected*sq<v[i] && v[i]<(selected+1)*sq )  // element in selected bucket
         {
             mp[v[i]]++;

             if(mp[v[i]]>1)
                return v[i];
         }
     }

     return -1;
}

int32_t main()
{
	fast;
	int n;
	cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
        cin>>v[i];
      cout<<solve(v)<<"\n";
	return 0;
}

