#include<bits/stdc++.h>
using namespace std;

bool checkpallindrome(string str){
 for(int i=0;i<str.length();i++)
 {
   if(str[i]!=str[str.length()-i-1])
   return false;
 }
 return true;
}

int fun(string s)
{
 int n=s.length();
 for(int i=0;i<n;i++)
 {
   string x="";
   for(int j=i;j<n;j++)
   {
      x+=s[i];
    //  cout<<x<"\n";
     if(x.length()%2!=0) {
     if(checkpallindrome(x)==false)
         return 0;
     }

   }
 }

 return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(fun(s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
   }

}
