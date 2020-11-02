int Solution::bulbs(vector<int> &A) {


    bool flag=true;
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0 && flag)
        {
            count++;
            flag=false;
        }
        else if(A[i]==1 && !flag)
        {
            count++;
            flag=true;
        }
    }
    return count;
    // int zero=0,one=0;
    // int idx;
    // for(int i=0;i<A.size();i++)
    // {
    //     if(A[i]==0)
    //   {
    //         idx=i;
    //         break;
    //   }

    // }


    // for(int i=A.size()-1;i>=idx;i--)
    // {
    //     if(A[i]==0)
    //     zero++;
    //     else
    //     one++;
    // }

    // if(zero==0)
    // return 0;
    // if(one==0)
    // return 1;


    // int count=0;

    //     while(zero!=0 && one!=0)
    //     {
    //         zero--;
    //         swap<int>(zero,one);
    //         count++;
    //     }


    // return count;
}

