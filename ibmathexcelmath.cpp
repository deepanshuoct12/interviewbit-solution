#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string A) {
    // map<char,int>mp;
    // for(char i='A';i<='Z';i++)
    // mp[i]=i-64;

    // if(A.size()==1)
    // {
    //     return mp[A[0]];

    // }

    //int ans = 26;
     int result = 0;
    for (const auto& c : A)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }

    return result;

    // int v=1;
    // for(int i=1;i<A.length();i++)
    // {
    //     v = mp[A[i-1]]*26*v + mp[A[i]];
    // }

    // return v;
}

int main()
{

    string str;
    cin>>str;
    cout<<titleToNumber(str);
}

