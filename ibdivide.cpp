#include<bits/stdc++.h>
using namespace std;
int divide(int A, int B)
{
if(A == 0 && B == 0)
return INT_MAX;

if(B == 0)
    return INT_MAX;

if(A == 0)
    return 0;

bool sign = (A < 0 && B < 0) || !(A<0) && !(B<0);

long long dividend = A;
long long divisor = B;
if(dividend<0)
    dividend = -1 * dividend;

if(divisor<0)
    divisor = -1 * divisor;

long long quotient = 0, temp = 0;
// cout<<dividend<<endl;
//cout<<divisor<<endl;

for(int i=31; i>=0; i--)
{
    if(temp + (divisor << i) <= dividend)
    {
        temp += divisor << i;
        quotient |= 1LL << i;
    }
    //cout<<quotient<<endl;
    if(quotient >= INT_MAX)
    {
        if(!sign)
            return INT_MIN;
        return INT_MAX;
    }
}

if(!sign)
    quotient = -1 * quotient;

return quotient;
}
int main(){

int a,b;
cin>>a>>b;

cout<<divide(a,b);
return 0;
}
