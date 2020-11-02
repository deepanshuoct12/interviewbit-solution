#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string s="";
int lcs(char X[],char Y[])
{
    int m=strlen(X);
    int n=strlen(Y);

    int dp[100][100];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
             if(i==0 || j==0)
             dp[i][j]=0;

             else if(X[i-1]==Y[j-1]) // WE DOSEN'T DO X[I]==Y[J] AS IN DP TABLE DP TABLE INDEXES ARE 1 LESS THAN M*N TABLE
            {
                dp[i][j]=1+dp[i-1][j-1];

            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }

        }
    }
    return dp[m][n];
}
/*
string  getLCS(string &s,string &t,int len)
{
    int i=0,j=0;
    string LCS;
    while(len>0)
    {
        if(s[i]==t[j])
        {
            LCS.push_back(s[i]);
            i++;
            j++;
            len--;
        }
        else
        {
            if(dp[i][j+1]>dp[i+1][j])
                j++;

            else
                i++;
        }
    }
return LCS;
}*/
int main()
{
   char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";

    cout<<"\n";

    cout<<lcs(X,Y)<<"\n"<<s;

    return 0;
}
