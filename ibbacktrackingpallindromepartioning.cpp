bool ispallindrome(string str,int l,int h){
    while(l<h){
        if(str[l]!=str[h])
        return false;
        l++;
        h--;
    }
    return true;
}
void helper(string &input,vector<string> &subset,int start,int n,vector<vector<string> >&ans){

       if(start>=n)
       {
           ans.push_back(subset);
           return;
       }

     for(int i=start;i<n;i++){
         if(ispallindrome(input,start,i))
         {
             subset.push_back(input.substr(start,i-start+1));
             helper(input,subset,i+1,n,ans);
             subset.pop_back();
         }

     }
}
vector<vector<string> > Solution::partition(string A) {
    vector<string> subset;
    vector<vector<string> >ans;

    helper(A,subset,0,A.size(),ans);

    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

