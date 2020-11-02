int Solution::arrange(string A, int B) {
    int n=A.size();
    if(n==0){return 0;}

    vector<int> dp(n,0);
    int countW=0,countB=0;
    if(B>n){return -1;}

    for(int j=n-1; j>=0; j--){
        if(A[j]=='W'){countW++;}
        else{countB++;}
        dp[j] = countW*countB;
    }

    for(int k=2;k<=B; k++){

        for(int i=0; i<n; i++){
            countW=0;
            countB=0;

            for(int j=i; j<n-1;j++){
                if(A[j]=='W'){countW++;}
                else{countB++;}

                dp[i]=min(dp[i],countW*countB + dp[j+1]);

            }

        }


    }

    return dp[0];
}
