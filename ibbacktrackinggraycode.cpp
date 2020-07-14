vector<int> Solution::grayCode(int A) {
     vector<int>ans;
    if(A<=0)
    return ans;

    ans.push_back(0);
    ans.push_back(1);
    int v=1;
    for(int i=2;i<(1<<A);i=i<<1)
    {

      for(int j=i-1;j>=0;j--)
      ans.push_back(ans[j]);

      //second half;
      int x=pow(2,v);
      for(int j=i;j<(2*i);j++)
      {
          ans[j]+=x;
      }
      v++;
    }

    // for(auto x:ans)
    // cout<<x<<" ";
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

