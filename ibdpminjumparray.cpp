int Solution::jump(vector<int> &A) {

    int max_reach = A[0];
int min_jumps = 1;
int reach = -1;
if(A.size() == 1){
    return 0;
}

for(int i = 1; i < A.size(); i++)
{
    if(i > max_reach)
    {   cout<<i<<"::"<<"\n";

        min_jumps++;
        max_reach = reach;
        reach = -1;
    }

    if(i<= max_reach && i + A[i] > reach)
    {  cout<<i<<":";
       reach = i + A[i];
       cout<<reach<<"\n";
    }
}

if(max_reach < A.size()-1 || max_reach == -1){
    min_jumps = -1;
}

return min_jumps;
    // int dp[1000006]={0};
    //  if(A.size()==1)
    //   return 0;
    // if(A[0]==0)
    //   return -1;
    // dp[0]=0;
    // for(int i=0;i<A.size()-1;i++)
    // {
    //     if(!dp[i] && i!=0)
    //      break;

    //     for(int j=1;j<=A[i];j++)
    //     {
    //         if(dp[i+j]==0)
    //         dp[i+j]=dp[i]+1;
    //         else
    //         dp[i+j]=min(dp[i]+1,dp[i+j]);
    //     }
    // }
    // if(dp[A.size()-1])
    // return dp[A.size()-1];
    // return -1;
}

