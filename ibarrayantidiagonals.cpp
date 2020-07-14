#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {

if(A.size()==0)
{
    return A;
}
int n=A.size();
int s = 2*A.size()-1;
 vector<vector<int> >ans(s);

 for(int j=0;j<=n-1;j++)
 {    int idx=j;
     for(int i=0;i<=j;i++)
     {
         ans[j].push_back(A[i][idx]);
         idx--;
     }
 }

 if(A.size()==1)
   return ans;

 int i=1;
 int idx2=A.size();
 int x = n-1;
 while(x--)
 {
     int j=n-1;
     for(int idx=i;idx<=n-1;idx++)
     {
         ans[idx2].push_back(A[idx][j]);
         j--;
     }
     idx2++;
     i++;
 }

 return ans;
}
int main()
{

    int n;
    cin>>n;
    vector<vector<int> >v(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {

            cin>>v[i][j];
        }
    }
    vector<vector<int> >ans = diagonal(v);
    return 0;
}

