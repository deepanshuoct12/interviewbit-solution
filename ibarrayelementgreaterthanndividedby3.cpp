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
    int n= v.size();

    int first = INT_MAX;
    int second = INT_MAX;

    int count1=0;
    int count2= 0;

    for(int i=0;i<n;i++)
    {

        if(first == v[i])
            count1++;

        else if(second ==v[i])
            count2++;

        else if(count1==0)
        {

            count1++;
            first = v[i];
        }

        else if(count2==0)
        {

            count2++;
            second = v[i];
        }

        else{
            count1--;
            count2--;
        }
    }

    count1=0;
    count2=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]==first)
            count1++;

         else if(v[i]==second)
            count2++;
    }

    if(count1>n/3)
        return first;

    if (count2>n/3)
        return second;

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

        cout<<solve(v);
	return 0;
}

