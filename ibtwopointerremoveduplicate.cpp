#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &A) {

            int count = 0, n = A.size();
            for (int i = 0; i < n; i++) {
                if (i < n - 1 && A[i] == A[i+1]) continue;
                else {
                    A[count] = A[i];
                    count++;
                }
            }
            return count;
}
/*
int Solution::removeDuplicates(vector<int> &A) {

    if(A.size()==0)
      return 0;


    if(A.size()==1)
      return 1;


    // vector<int>::iterator i=A.begin();
    // vector<int>::iterator j=A.begin()+1;


    // while(j!=A.end() && i!=A.end()){

    //     if((*i)==(*j)){
    //         A.erase(j);
    //     }

    //      else
    //     {
    //         i++;
    //         j++;
    //     }

    // }

    // return A.size();

}
*/
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     n=removeDuplicates(v);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<"\n";
return 0;
}
