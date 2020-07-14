#include <bits/stdc++.h>
using namespace std;

void spiralOrder(const vector<vector<int> > &A) {

    int r=A.size();
    int c= A[0].size();
    vector<int>v;

   int T =0,B=r-1,L=0,R=c-1;
    int dir =0;
   while(T<=B && R>=L)
   {
       if(dir==0)
       {
           for(int i=L ;i<=R;i++)
           {
               v.push_back(A[T][i]);
               cout<<A[T][i]<<" ";
           }

           T++;
       }

        else if(dir==1)
       {
           for(int i=T;i<=B;i++)
           {
               v.push_back(A[i][R]);

               cout<<A[i][R]<<" ";
           }

           R--;
       }
        else if(dir==2)
       {
           for(int i=R;i>=L;i--)
           {
               v.push_back(A[B][i]);
               cout<<A[B][i]<<" ";
           }

           B--;
       }
        else if(dir==3)
       {
           for(int i=B;i>=T;i--)
           {
               v.push_back(A[i][L]);
               cout<<A[i][L]<<" ";
           }

           L++;
       }

       dir=(dir+1)%4;

   }
   // return v;
}


int main() {


	int m,n;
	cin>>m>>n;
		vector<vector<int> >A(m);
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        int x;
	        cin>>x;
	        A[i].push_back(x);
	    }
	}

	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    cout<<A[i][j];

	    cout<<"\n";
	}

       spiralOrder(A);
	return 0;
}


