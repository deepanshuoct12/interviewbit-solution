#include<bits/stdc++.h>
using namespace std;

int findMinXor(vector<int> &A) {


    if(A.size()==0)
    return 0;

    int minxor = INT_MAX;

    sort(A.begin(),A.end());

    for(int i=1;i<A.size();i++)
    {
        minxor = min(minxor,A[i]^A[i-1]);
    }

    return minxor;

}

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<findMinXor(v);
}
