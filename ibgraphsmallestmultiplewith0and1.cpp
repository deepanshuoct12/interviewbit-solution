int mod(string t,int n)
{
    long long int r=0;
    for(int i=0;i<t.length();i++)
    {
        r=r*10 + (t[i]-'0');
        r%=n;
    }
    return r;
}
string Solution::multiple(int A) {
    queue<string> q;
    q.push("1");
    vector<bool> visited(100000009,false);

    while(!q.empty())
    {
        string t=q.front();
        q.pop();

        long long int rem=mod(t,A);

        if(rem==0)
        return t;

        if(visited[rem]==false)
        {
            visited[rem]=true;
            q.push(t+"0");
            q.push(t+"1");
        }
    }
}
/*
string Solution::multiple(int N) {
    if(N==1) return "1";
    vector<int> p(N,-1);//parent state
    vector<int> s(N,-1);//step from parent to current
    //BFS
    int steps[2] = {0,1};
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(curr==0) break;
        for(int step: steps){
            int next = (curr*10+step)%N;
            if(p[next]==-1){
                p[next]=curr;
                s[next]=step;
                q.push(next);
            }
        }
    }
    //build reversed string
    string number;
    for(int it=0; it!=1; it=p[it])
        number.push_back('0'+s[it]);
    number.push_back('1');
    //return the reverse if it
    return string(number.rbegin(), number.rend());
}
*/
