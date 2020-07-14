vector<int> Solution::plusOne(vector<int> &A) {


    int idx=0;
    while(A[idx]==0)
    {
        idx++;
    }

    vector<int> B;

    if(idx >=A.size())
       {
           B.push_back(1);
           return B;
       }

    for(int i = idx;i<A.size();i++)
         B.push_back(A[i]);


    reverse(B.begin(),B.end());
    B[0]+=1;
    int carry = B[0]/10;
    B[0]=B[0]%10;

    for(int i=1;i<B.size();i++)
    {
        B[i]=(B[i] + carry);
        carry = B[i]/10;
        B[i]%=10;
    }
    if(carry)
     B.push_back(carry);


     reverse(B.begin(),B.end());

     return B;
}

