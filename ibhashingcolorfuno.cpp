int Solution::colorful(int A) {

    string str=to_string(A);

    unordered_map<int,int>mp;
    for(int i=0;i<str.length();i++)
    {   int prod=str[i]-'0';
         if(mp[prod])
          return 0;

         mp[prod]++;
        for(int j=i+1;j<str.length();j++)
        {
            prod*=(str[j]-'0');
            if(mp[prod]){
                return 0;
            }
            else
            mp[prod]++;

        }
    }

    return 1;
}

