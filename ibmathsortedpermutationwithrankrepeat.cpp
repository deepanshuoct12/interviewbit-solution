#include<bits/stdc++.h>
using namespace std;
// extended gcd returns the gcd of a and b using equation ax+by = gcd(a,b)
// it also returns the value of x and y which we can put in above equation to
// get gcd of a and b
int extended_gcd(int a,int b,int &x,int &y)
{
if(a==0)
{
x = 0;
y = 1;
return b;
}
int x1,y1;

   int gcd = extended_gcd(b%a,a,x1,y1);

   x = y1 - (b/a)*x1;
   y = x1;

   return gcd;
}
// simple factorial function
// which returns the factorial modulo given number 1000003;

long long int factorial(long long int n)
{
    long long int ans = 1;
    while(n>=2)
    {
        ans = (ans%1000003)*(n%1000003);
        n--;
    }
    return ans%1000003;
}

int findRank(string A) {
    // map to not the frequency of each character , because later on we need to divide
    // by count of characters which are repeating

    unordered_map<char,int> map;

    int n = A.size();

    if(n==1) return 1;

    for(int i=0;i<n;i++)
    map[A[i]]++;

    long long int count = 0;

    // recusrive solution's small calculation
    // doing self for first character

    // for first character count the total number of characters which are
    // smaller than the first character
    // because all of their permutations will come before the first character

    for(int i=1;i<n;i++)
    if(A[i]<A[0]) count++;

    long long int ans = 0;
    if(count>0)
    {   // for each character smaller than the first character of string
        // we multiply by (n-1)! because these are the count of total permutation
        // each smaller character can make!
        ans = factorial(n-1)%1000003;
        // count of permutation for all characters
        ans = (ans*count)%1000003;

         // this is the key part!!!
         // where we have to divide by factorials of repeating characters

         // suppose we want to do (ans/2!)%1000003
         // this is equal to (ans%1000003 * inverseMod(2!)%1000003)%1000003;

         // inverseMod() can be calculated with the help of extended euclidean gcd algorithm

        for(auto i:map)
        {
            if(i.second>1)
            {
                int temp = (factorial(i.second));
                if(ans%temp==0) ans = (ans/temp)%1000003;
                else
                {   int x,y;
                    int g = extended_gcd(temp,1000003,x,y);
                    int res = (x%1000003 + 1000003)%1000003;
                    ans = (ans%1000003*res%1000003)%1000003;
                }
            }
        }
    }
    // recursive call for rest of string
    return (ans + findRank(A.substr(1)))%1000003;
}

int main()
{

    string s;
    cin>>s;
    cout<<findRank(s);
}
