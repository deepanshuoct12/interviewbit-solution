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


int firstMissingPositive(vector<int> &A) {
    int j=0;
    for(int i=0;i<A.size();i++)
        if(A[i]<=0)
            swap(A[i],A[j++]);
    //first j elements are non-positive
    A.erase(A.begin(),A.begin()+j);
    for(int i=0;i<A.size();i++)
        if(abs(A[i])-1>-1 and abs(A[i])-1<A.size())
           if(A[abs(A[i])-1]>=0)
            A[abs(A[i])-1]*=-1;

    for(int i=0;i<A.size();i++)if(A[i]>0)return i+1;
    return A.size()+1;
}


int32_t main()
{
	fast;
	int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];



    cout<<firstMissingPositive(v)<<"\n";


	return 0;
}


