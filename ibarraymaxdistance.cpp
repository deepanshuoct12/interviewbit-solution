#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
     return a.second<b.second;

    return a.first<b.first;
}
int maximumGap(const vector<int> &A) {


      if(A.size()==0)
     return -1;

    if(A.size()==1)
      return 0;

     vector<pair<int,int> >v;
    for(int i=0;i<A.size();i++)
    {
       v.push_back(make_pair(A[i],i));
    }

    sort(v.begin(),v.end(),mycompare);
    int mn=INT_MAX;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        mn=min(mn,v[i].second);
        ans=max(ans,v[i].second-mn);
    }

    return ans;

}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<maximumGap(v);

    return 0;
}

