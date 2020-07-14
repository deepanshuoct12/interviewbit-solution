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

//real solution
vector<int> nextPermutation(vector<int> &a) {
int n=a.size();
int i,j;
for(i=n-2;i>=0;i--){
    if(a[i]<a[i+1])
    break;
}
if(i==-1){
   reverse(a.begin(),a.end());
   return a;
}else{
    for(j=i+1;j<n;j++){
        if(a[j]<=a[i]){
            break;
        }
    }
    swap(a[i],a[j-1]);
    sort(a.begin()+i+1,a.end());
    return a;
}
}
/*
vector<int>nextPermutation(vector<int>&A)
{
    int n = A.size();
    int f=1;//desc
    for(int i=1;i<n;i++)
    {
        if(A[i]>A[i-1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
   {
      sort(A.begin(),A.end());
      return A;
   }

    int f2=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(j+1<n && A[j+1]>A[j])
            {
                f2=0;
                break;
            }
        }

        if(f2)
        {
            auto it = upper_bound(A.begin()+1,A.end(),A[i])-A.begin();
            swap<int>(A[it],A[i]);
        }

        else if(f2==0 && j==n)
        {
            swap<int>(A[n-1],A[n-2]);
        }
    }
   return A;
}*/
int32_t main()
{
	fast;
	int n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
        cin>>v[i];

    v = nextPermutation(v);
    for(auto x:v)
        cout<<x;
	return 0;
}

