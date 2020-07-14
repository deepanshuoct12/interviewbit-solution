#include<bits/stdc++.h>
using namespace std;

void arrange(vector<int> &A) {

    int n=A.size();
    for(int i=0;i<n;i++)
    {
        A[i]+=(A[A[i]]%n)*n;
    }

    for(int i=0;i<n;i++)
    {
        A[i] = A[i]/n;


    }
    //  vector<int>v2(A.size());

    //  for(int i=0;i<A.size();i++)
    //  {
    //      v2[i]=A[A[i]];
    //  }
    //  A=v2;

}

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    arrange(v);
    return 0;
}
