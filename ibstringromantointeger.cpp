#include<bits/stdc++.h>
using namespace std;

int romanToInt(string A) {

    if(A.length()==0)
    return 0;
    int ans=0;
    map<char,int>mp;
     mp['I']=1;
     mp['V']=5;
     mp['X']=10;
     mp['L']=50;
     mp['C']=100;
     mp['D']=500;
     mp['M']=1000;

    if(mp[A[A.length()-1]])
     ans=mp[A[A.length()-1]];

    for(int i=A.length()-2;i>=0;i--)
    {
        if(mp.count(A[i])==0)
         continue;

        if(mp[A[i]]>=mp[A[i+1]])
        ans+=mp[A[i]];
        else if(mp[A[i]]<mp[A[i+1]])
        ans-=mp[A[i]];
    }

    return ans;
}
int main(){
    string A;
    cin>>A;
    cout<<romanToInt(A);
return 0;
}
