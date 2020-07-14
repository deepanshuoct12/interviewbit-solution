int Solution::removeDuplicates(vector<int> &A) {

     if(A.size()==0)
      return 0;


    if(A.size()==1)
      return 1;

      int count = 0, n = A.size();
      int f=1;
            for (int i = 0; i < n; i++) {
                if (i < n - 1 && A[i] == A[i+1])
                {  f++;
                   if(f==2)
                    {A[count]=A[i];
                        count++;
                    }
                    continue;

                }
                else {


                    A[count] = A[i];
                    count++;
                    f=1;
                }
            }
            return count;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

