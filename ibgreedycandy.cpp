#include<bits/stdc++.h>
int Solution::candy(vector<int> &A) {

    vector<int>count(A.size(),1);

    for(int i=1;i<A.size();i++)
    if(A[i]>A[i-1])
    count[i]=max(count[i],count[i-1]+1);

    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i]>A[i+1])
        count[i]=max(count[i],count[i+1]+1);
    }


    return accumulate(count.begin(),count.end(),0);//return sum
}

