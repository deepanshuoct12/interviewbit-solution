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

vector<int>maxset(vector<int> &A) {
 int n = A.size();

int curr = 0;
 int maxsum = 0;

vector<int>ans;
vector<int>temp;
vector<int>ans2;
for( int i=0;i<n;i++){

    if(A[i]<0)
       {   curr=0;
           temp.clear();

           continue;
       }

     else
       {
            curr = curr + A[i];
            temp.push_back(A[i]);

              if(curr==0)
             {

                if(temp.size()>ans2.size())
                   ans2=temp;
             }

            else if(curr>maxsum)
            {
              maxsum = curr;
              ans=temp;

             }
       }
}
if(maxsum==0)
return ans2;

return ans;
}


int32_t main()
{
	fast;
	int n;

	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
        cin>>v[i];

    v=maxset(v);
	return 0;
}
