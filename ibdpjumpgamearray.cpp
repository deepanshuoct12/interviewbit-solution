   int minIndexPossible = n - 1;
            for (int i = n - 2; i >= 0; i--) {
                bool isPossibleFromThisIndex = false;
                if (i + A[i] >= minIndexPossible) {
                    isPossibleFromThisIndex = true;
                    minIndexPossible = i;
                }
                if (i == 0) return isPossibleFromThisIndex;
            }
            return true;
/*int Solution::canJump(vector<int> &A) {

    int dp[1000006]={0};
    if(A[0]==0)
    {
        if(A.size()==1)
        return 1;

        return 0;

    }

    dp[0]=1;
    for(int i=0;i<A.size()-1;i++)
    {
        if(!dp[i])
         break;

        for(int j=1;j<=A[i];j++)
        {
            dp[i+j]++;
        }
    }
    if(dp[A.size()-1])
    return 1;

    return 0;
}
*/

