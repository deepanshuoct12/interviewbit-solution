vector<int> Solution::stepnum(int A, int B) {
   queue<int> q({1,2,3,4,5,6,7,8,9});
   vector<int>ans;
   if(A==0)
   ans.push_back(0);
   while(!q.empty())
   {
    int curr=q.front();
    q.pop();

    if(curr>=A && curr<=B)
    ans.push_back(curr);

    if(curr==0 || curr>B)
    continue;

    int ld=curr%10;

    int sa=curr*10 + (ld-1);
    int sb=curr*10 + (ld+1);

    if(ld==0)
    q.push(sb);
    else if(ld==9)
    q.push(sa);

    else
    {
        q.push(sa);
        q.push(sb);
    }

   }
    return ans;
}

