string Solution::reverseString(string A) {
    stack<char>s1;
    string s2;
    for(auto x:A)
    s1.push(x);

    while(!s1.empty()){
        s2.push_back(s1.top());
        s1.pop();
    }

//     while(!s2.empty()){
//     str.push_back(s2.top());
//     s2.pop();
//   }
   return s2;
}

