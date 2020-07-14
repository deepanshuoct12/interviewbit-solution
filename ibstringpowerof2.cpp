#include<bits/stdc++.h>
using namespace std;

int power(string A)
{
   long long  k = 0;
    int i=0;
    int len = A.size();
    while(i<len)
    {
        k = k*10+(A[i]-'0');
        i++;
    }
    if(k == 1)
        return 0;
    int p = k-1;
    if((k & p) == 0)
        return 1;
    else
        return 0;
}

int main()
{

    string str;
    cin>>str;
    cout<<power(str);
}
/*
int Solution::power(string A) {
    long double a = stold(A);
    if(a<2) return 0;

    while(a!=1)
    {
        a=a/2;
        long double x = floor(a);
        if(a!=1 && a!=x)
        {
            return 0;
        }
    }

    return 1;
}
*/
