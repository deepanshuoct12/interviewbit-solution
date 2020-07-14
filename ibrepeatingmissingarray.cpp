vector<int> Solution::repeatedNumber(const vector<int> &A)
{

long long int square = 0;
long long int linear = 0;
for(int i =0; i < A.size(); i++)
{
linear = linear + A[i];
square = square + (long) A[i]*A[i];
}
long long int expected_square = ((A.size())*(A.size()+1)*(2*A.size() + 1))/6;
long long int linear_expected = ((A.size())*(A.size()+ 1))/2;
long long int linear_difference = linear - linear_expected;
long long int square_difference = square - expected_square;
long long int sum = square_difference / linear_difference;
long long int a = (sum + linear_difference)/2;
long long int b = sum - a;
vector<int>v;
v.push_back(a);
v.push_back(b);
return v;
    // ll sum1 = 0 ;

//     ll sum4=0;
//     for(int i=0;i<A.size();i++)
//     {
//         sum1+=A[i];
//         sum4 =sum4 + long(A[i]*A[i]);
//     }
//     ll m = A.size();

//     ll sum2 = (m*(m+1))/2;

//   ll sum3 = ((m+1)*(m)*(2*m+1))/6;

//   ll v1 = sum1 - sum2;
//   ll v2 = sum4 - sum3;

//   ll d = v2/v1;
//   ll a = (d+v1)/2;
//   ll b = d-a;

//   vector<int>ans;
//   ans.push_back(a);
//   ans.push_back(b);

//   return ans;


    // ll n = A.size();
    // unordered_map<int,int>mp;
    // ll v1,v2;
    // int m = INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     m=max(m,A[i]);
    //     if(mp[A[i]])
    //       {
    //           v1 = A[i];
    //       }
    //     mp[A[i]]++;
    // }

    // for(int i=1;i<=m;i++)
    // {
    //     if(!mp[i])
    //       {
    //           v2=i;
    //           break;
    //       }
    // }

    // vector<int>ans;
    // ans.push_back(v1);
    // ans.push_back(v2);

    //return ans;


}

