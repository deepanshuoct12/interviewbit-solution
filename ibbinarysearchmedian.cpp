double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {

    int x=A.size(), y=B.size();
    //if A length is greater then switch them so that A is smaller than B
    if(x>y) return findMedianSortedArrays(B,A);
    int start=0,end=x;  //two array hence don't use end=x-1 as smaller array may be empty
    while(start<=end){
        int partitionX = start + (end-start)/2;
        int partitionY =(x+y+1)/2 - partitionX;

        //if partitionX is 0 it means nothing is there on left side. Use -INF for minX
        //if partitionX is length of input then there is nothing on right side. Use +INF for maxX
        //update min and max which are left/right neighbouring values around partition
        int minX = (partitionX==0)? INT_MIN:A[partitionX-1];
        int maxX = (partitionX==x)? INT_MAX:A[partitionX];

        int minY = (partitionY==0)? INT_MIN:B[partitionY-1];
        int maxY = (partitionY==y)? INT_MAX:B[partitionY];

        if(minX<=maxY && minY<=maxX){
            //We have partitioned array at correct place
            if((x+y)%2 == 0)
                return ((double)(max(minX,minY)+min(maxX,maxY)))/2;
            else
                return (double)max(minX,minY);
        }
        else if(minX>maxY)
            //we are too far on right side for partitionX. Go on left side.
            end = partitionX-1;
        else
            //we are too far on left side for partitionX. Go on right side.
            start = partitionX+1;
    }
    //We can come here only**strong text** if input arrays were not sorted.
    return -1;
    // vector<double>C(A.size()+B.size());
    // merge(A.begin(),A.end(),B.begin(),B.end(),C.begin());

    // if(C.size()%2!=0)
    // {
    //     return C[C.size()/2];
    // }

    // else{
    //     double ans = ( C[(C.size()-1)/2] + C[C.size()/2] )/2;
    //     return ans;
    // }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

