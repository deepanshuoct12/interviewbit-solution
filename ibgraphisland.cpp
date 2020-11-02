vector<int> parent;
vector<int> rnk;
bool cmp(const vector<int> &v1,const vector<int> &v2)
{
    return v1[2]<v2[2];
}
int find(int x)
{
    if(parent[x] != x)
    {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}
void Union(int x1,int x2)
{
    x1 = find(x1);
    x2 = find(x2);
    if(rnk[x1] < rnk[x2])
    {
        parent[x1] = x2;
    }
    else if(rnk[x2] < rnk[x1])
    {
        parent[x2] = x1;
    }
    else
    {
        parent[x1] = x2;
        rnk[x2]++;
    }
}
int Solution::solve(int a, vector<vector<int> > &b) {
    parent.clear();
    rnk.clear();
    sort(b.begin(),b.end(), cmp);
    parent = vector<int>(a+1,0);
    rnk = vector<int>(a+1,0);
    for(int i=1; i<=a; i++)
    {
        parent[i] = i;
    }
    int count = 0,ans=0;
    for(vector<int> i : b)
    {
        int x1 = find(i[0]);
        int x2 = find(i[1]);
        if(x1 != x2)
        {
            count++;
            ans += i[2];
            Union(i[0],i[1]);
        }
        if(count == a-1) break;
    }
    return ans;
}
