#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int> > &A) {

 int rows = A.size();
 int cols=A[0].size();
 int  maxend=-1,maxstart=0,maxup=0,maxdown=0,maxsum=0,maxleft=0,maxright=0;

 for(int left=0;left<cols;left++)
 {
     vector<int>temp(rows,0);
     for(int right=left;right<cols;right++)
     {
         for(int k=0;k<rows;k++)
         temp[k]+=A[k][right];

         //kadanes
         int kcurrsum=0,kmaxsum=-1,s=0,e=0;
         for(int i=0;i<temp.size();i++)
         {
             kcurrsum+=temp[i];
             if(kcurrsum<0)
             {
                 s=i+1;
                 kcurrsum=0;
             }
             else
             {
                 if(kcurrsum>kmaxsum)
                 {
                     kmaxsum=kcurrsum;
                     e=i;
                 }
             }

         }
         int currsum=kmaxsum;
         if(maxsum<currsum)
         {
             maxsum=currsum;
             maxleft=left;
             maxright=right;
             maxdown=s;
             maxup=e;
         }
     }
 }
 for(int i=maxup;i<=maxdown;i++)
 {
     for(int j=maxleft;j<=maxright;j++)
        cout<<A[i][j]<<" ";
     cout<<"\n";
 }

}


int main()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int> >v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {

            cin>>v[i][j];
        }
    }
    solve(v);
}
