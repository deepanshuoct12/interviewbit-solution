vector<int> Solution::prevSmaller(vector<int> &A) {
     stack<int>s;
     vector<int>G;
     for(int i=0;i<A.size();i++){
         while( !(s.empty()) && (s.top()>=A[i]))
         {
             s.pop();
         }

         if(s.empty())
         G.push_back(-1);

         else
         G.push_back(s.top());

         s.push(A[i]);
     }
     return G;
}

