#include<bits/stdc++.h>
using namespace std;

int atoi(const string A) {
    long long int num=0;
    int sign=1;
    for(int i=0;i<A.length();i++)
    {
        if(isdigit(A[i]))
          {
              num=num*10;
              num+=(A[i]-'0');

               if(num>INT_MAX || num<INT_MIN)
               {
                   if(A[0]=='-')
                     return INT_MIN;

                     return INT_MAX;
               }

          }
          else if((A[i]=='-' || A[i]=='+') && i==0)
          {
              if(A[i]=='-')
              sign=-1;

              continue;
          }

          else
             break;


    }


    return int(sign*num);

}

int main(){
string str;
cin>>str;
cout<<atoi(str);
return 0;
}
