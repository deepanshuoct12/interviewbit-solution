#include <bits/stdc++.h>
using namespace std;


int maximumGap(const vector<int> &A) {
    int size=0;
    for(auto x:A)
     size = max(size,x);

     vector<int>sorted(size+1);
       vector<int>ans;

     for(int i=0;i<A.size();i++)
     {
         sorted[A[i]]=1;
     }

     for(int i=0;i<sorted.size();i++)
     {
         if(sorted[i])
         {
           ans.push_back(i);
         }
     }
     int mx = 0;



     for(int i=1;i<ans.size();i++)
     {
         mx = max(mx,ans[i]-ans[i-1]);
     }
     return mx;

}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

	cout<<maximumGap(v);
	return 0;
}
