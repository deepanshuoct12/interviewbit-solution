#include<bits/stdc++.h>
using namespace std;

string addBinary(string A, string B) {


    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    string ans;
    int len=min(A.length(),B.length());
    int carry=0;
    int no=0;
    int i;
    for(i=0;i<len;i++)
    {
      int val =((A[i]-'0')+(B[i]-'0') + carry);
        ans+=to_string(val%2);
        carry = val/2;
    }
    int l = max(A.length(),B.length())-min(A.length(),B.length());
    while(l>0 || carry)
    {
        int n;
        char v='0';


           if(A.length()>B.length())
          {
              v=A[i];
              n=A.length();
          }
          else if(A.length()<B.length())
          {
              v=B[i];
              n=B.length();
          }

         if( i>= max( A.length(),B.length() ))
            v='0';

        ans+=to_string(((v-'0')+carry)%2);
        carry = ((v-'0')+carry)/2;
        i++;
        l--;
    }

    reverse(ans.begin(),ans.end());

    return ans;
}

int main()
{

    string a,b;
    cin>>a>>b;
    cout<<addBinary(a,b);
}
