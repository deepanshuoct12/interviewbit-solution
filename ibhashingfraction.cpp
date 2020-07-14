string Solution::fractionToDecimal( int A, int B) {

  long long int num=A,den=B;
  if (num == 0)
        return "0";

    // If any one (out of numerator and denominator)
    // is -ve, sign of resultant answer -ve.
    long long int sign = (num < 0) ^ (den < 0) ? -1 : 1;

    num = abs(num);
    den = abs(den);

    // Calculate the absolute part (before decimal point).
    long long int initial = num / den;

    // Output string to store the answer
    string res;

    // Append sign
    if (sign == -1)
        res += "-";

    // Append the initial part
    res += to_string(initial);

    // If completely divisible, return answer.
    if (num % den == 0)
        return res;

    res += ".";

    //Initialize Remainder
    long long int rem = num % den;
    map<long long int, long long int> mp;

    // Position at which fraction starts repeating
    //if it exists
    long long int index;
    bool repeating = false;
    while (rem > 0 && !repeating) {
        //  cout<<rem<<"\n";
        // If this remainder is already seen,
        // then there exists a repeating fraction.
        if (mp.find(rem) != mp.end()) {

            // Index to insert parentheses
            index = mp[rem];
            repeating = true;
            break;
        }
        else
            mp[rem] = res.size();

        rem = rem * 10;

        // Calculate quotient, append it to result and
        // calculate next remainder
        long long int temp = rem / den;
        res += to_string(temp);
        rem = rem % den;
    }

    // If repeating fraction exists, insert parentheses.
    if (repeating) {
        res += ")";
        res.insert(index, "(");
    }
    return res;


//MY METHOD

//   string s;int f=1,i=0;
//   unordered_map<long long int,long long int>mp;
// //long long int a=A,b=B;
//   if(A==0 && B==0)
//   return "0";

//   long long int div;
//   long long int sign =1;// (A<0)^(B<0)?-1:1;
//   long long int a=A,b=B;
//   if((a<0 && !(b<0)) || (!(a<0) && (b<0)))
//   sign=-1;

//   if(sign==-1)
//   s+="-";

//   a=abs(a);
//   b=abs(b);
//   int idx=1;
//   while(1)
//   {

    //  div=a/b;
    //  s+=to_string(div);
    //  long long int rem = a%b;

    // if(mp[div])
    //   break;


    // if(rem==0)
    //   return s;


    //  if(f)
    //  {
    //   s+=".";
    //   f=0;
    //  }

    //  a=rem*10;

    // if(s[s.size()-1]!='.')
    //   mp[div]=idx;

//     idx++;
//   }

// //   for(auto x:mp)
// //   cout<<x.first<<" "<<x.second<<"\n";

//   s.push_back(')');
//   s.insert(mp[div],"(");
//   return s;

 }

