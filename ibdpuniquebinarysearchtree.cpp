int Solution::numTrees(int A) {
   long long int catlan[A+1];
    memset(catlan,0,sizeof(catlan));
    catlan[0]=catlan[1]=1;
    for(int i=2;i<=A;i++)
    {
        for(int j=0;j<i;j++)
        catlan[i]+=(catlan[j]*catlan[i-j-1]);
    }

    return int(catlan[A]);
}

