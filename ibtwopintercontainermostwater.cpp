int Solution::maxArea(vector<int> &A) {

    if(A.size()==0 || A.size()==1)
    return 0;

    int i=0,j=A.size()-1;
    int maxarea=INT_MIN;
     while(i<j){

         int base = j-i;
         int height = min(A[i],A[j]);
         int area = height*base;

          maxarea = max(maxarea,area);
         if(A[i]<A[j])
         i++;
         else
         j--;
     }

     return maxarea;
}

