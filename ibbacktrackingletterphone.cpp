char characters[][10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(string &input,string &output,int i,vector<string>& ans){
    if(i>=input.size())
    {
       // output[j]='/0';
        ans.push_back(output);
        return;
    }

    int digit = input[i]-'0';

    for(int idx=0;characters[digit][idx]!='\0';idx++){
        output.push_back(characters[digit][idx]);
        helper(input,output,i+1,ans);
         output.pop_back();
    }
   return;
}
vector<string> Solution::letterCombinations(string A) {

    string output;
    vector<string>ans;
    helper(A,output,0,ans);
    return ans;

}

