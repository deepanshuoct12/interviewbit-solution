#include<bits/stdc++.h>
using namespace std;

int isPower(int A)
{
    if(A==0 || A==1)
    return 1;


    long long int n = A;
    vector<pair<long long int,long long int> >factors;
    // check by 2
	if (n % 2 == 0)
	{
		long long int cnt = 0;

		while (n > 1 && n % 2 == 0)
		{
			n /= 2;
			cnt++;
		}
		factors.push_back({2, cnt});
	}

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			long long int cnt = 0;
			while (n > 1 && n % i == 0)
			{
				n /= i;
				cnt++;
			}
			factors.push_back({i, cnt});
		}

	}
	if (n > 1) {  // if n has no other facor then we take n has its facor now
		factors.push_back({n, 1});
	}

    if(factors.size()==1 && factors[0].second>1)
     return 1;


	    long long int gcd = 0;
        for(auto it: factors)
         gcd = __gcd(gcd,it.second);
           return gcd>=2;
// 	int f=1;
// 	for(int i=1;i<factors.size();i++)
// 	{
// 	    if(factors[i].second!=factors[i-1].second)
// 	    {
// 	        f=0;
// 	        break;
// 	    }
// 	}
// 	if(f)
// 	return 1;


//	return 0;
}
int main(){
int n;
cin>>n;

cout<<isPower(n);
return 0;
}
