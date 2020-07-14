#include<bits/stdc++.h>
using namespace std;

vector<int> allFactors(int A) {

     vector<int>ans;
    if(A<=1)
    {   ans.push_back(A);
        return ans;

    }


    for(int i=1;i*i<=A;i++)
    {
        if(A%i==0)
        {
            ans.push_back(i);

            if(i!=A/i)
            ans.push_back(A/i);

        }
    }

    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{

    int n;
    cin>>n;
    vector<int>v = allFactors(n);
}
