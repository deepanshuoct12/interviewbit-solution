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


vector<int> flip(string A) {

    int count=0;
    int ltemp =0;
    int l,r;
    int maxcount = INT_MIN;
    int cnt =0;

    for(auto x:A)
    {
        if(x=='1')
         cnt++;
    }
    if(cnt == A.size())
    {
        vector<int>v2;
        return v2;
    }

    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='0')
        count++;

        if(A[i]=='1')
        count--;

        if(count>maxcount)
         {
             l=ltemp;
             r=i;
             maxcount=count;
         }

          if(count<0)
         {
             count=0;
            ltemp=i+1;
         }
    }
    vector<int>v;

    v.push_back(l+1);
    v.push_back(r+1);
    return v;

    // int len = A.length();
    // int one=0,zero=0;
    // for(int i=0;i<len;i++)
    //   {
    //       if(A[i]=='0')
    //         zero++;

    //       else
    //         one++;
    //   }
    //   int ans=one;
    //   vector<int>v(2);
    //   v[0]=1LL<<60;
    //   v[1]=1LL<<60;

    //   for(int l=0;l<len;l++)
    //   {  int z=0;
    //      int o=0;
    //       for(int r=l;r<len;r++)
    //       {
    //           if(A[r]=='0')
    //           z++;
    //           else if(A[r]=='1')
    //           o++;

    //           int val = one-o+z;
    //           if(val>ans)
    //           {
    //                   v[0]=l+1;
    //                   v[1]=r+1;
    //                     ans=val;



    //           }
    //       }
    //   }

    //   if(v[0]==0 && v[1]==0)
    //     {
    //         vector<int>v2;
    //         return v2;
    //     }

    //   return v;
}

int32_t main()
{
	fast;
	string s;
	cin>>s;

	vector<int>ans = flip(s);

	cout<<v[0]<<" "<<v[1]<<"\n";


	return 0;
}

