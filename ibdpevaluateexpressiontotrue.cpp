unordered_map<string,long long int> mp;
#define mod 1003
int helper(string str,int i,int j,bool istrue)
{
    if(i>j)
        return 0;
    if(i==j)
    {
        if(istrue==true)
            return str[i]=='T';
        else
            return str[i]=='F';
    }

    string temp=to_string(i) + " " + to_string(j) + " " + to_string(istrue);

    if(mp.find(temp)!=mp.end())
    return mp[temp];

    long long int ans=0;
    for(int k=i+1;k<=j-1;k+=2)
    {
        long long int lt=helper(str,i,k-1,true)%mod;
        long long int lf=helper(str,i,k-1,false)%mod;
        long long int rt=helper(str,k+1,j,true)%mod;
        long long int rf=helper(str,k+1,j,false)%mod;

        if(str[k]=='&')
        {
            if(istrue==true)
                ans+=((lt%mod)*(rt%mod))%mod;
            else
                ans+=( ((lf%mod)*(rt%mod))%mod + ((lf%mod)*(rf%mod))%mod + ((lt%mod)*(rf%mod))%mod)%mod;
        }
        else if(str[k]=='|')
        {
            if(istrue==true)
                ans+=( ((lt%mod) * (rt%mod))%mod + ((lt%mod) * (rf%mod))%mod +((lf%mod) * (rt%mod))%mod )%mod;
            else
                ans+=((lf%mod) * (rf%mod))%mod;
        }
        else if(str[k]=='^')
        {
            if(istrue==true)
            ans+=( ((lt%mod) * (rf%mod))%mod +((rt%mod) * (lf%mod))%mod)%mod;
            else
            ans+=( ((lt%mod) * (rt%mod))%mod +((lf%mod) * (rf%mod))%mod )%mod;
        }
    }
    return mp[temp]=ans%mod;
}
int Solution::cnttrue(string A) {
    mp.clear();
    return int(helper(A,0,A.length()-1,true)%mod);
}

