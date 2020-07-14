#include<bits/stdc++.h>
using namespace std;


int isNumber(const string A)
{
    int i = 0, j = A.length() - 1;

    // Handling whitespaces
    while (i < A.length() && A[i] == ' ')
        i++;
    while (j >= 0 && A[j] == ' ')
        j--;

    if (i > j)
        return 0;

    // if string is of length 1 and the only
    // character is not a digit
    if (i == j && !(A[i] >= '0' && A[i] <= '9'))
        return 0;

    // If the 1st char is not '+', '-', '.' or digit
    if (A[i] != '.' && A[i] != '+'
        && A[i] != '-' && !(A[i] >= '0' && A[i] <= '9'))
        return 0;

    // To check if a '.' or 'e' is found in given
    // string. We use this flag to make sure that
    // either of them appear only once.
    bool flagDotOrE = false;

    for (i; i <= j; i++) {
        // If any of the char does not belong to
        // {digit, +, -, ., e}
        if (A[i] != 'e' && A[i] != '.'
            && A[i] != '+' && A[i] != '-'
            && !(A[i] >= '0' && A[i] <= '9'))
            return 0;

        if (A[i] == '.') {
            // checks if the char 'e' has already
            // occurred before '.' If yes, return 0.
            if (flagDotOrE == true)
                return 0;

            // If '.' is the last character.
            if (i + 1 > A.length())
                return 0;

            // if '.' is not followed by a digit.
            if (!(A[i + 1] >= '0' && A[i + 1] <= '9'))
                return 0;
        }

        else if (A[i] == 'e') {
            // set flagDotOrE = 1 when e is encountered.
            flagDotOrE = true;

            // if there is no digit before 'e'.
            if (!(A[i - 1] >= '0' && A[i - 1] <= '9'))
                return 0;

            // If 'e' is the last Character
            if (i + 1 > A.length())
                return 0;

            // if e is not followed either by
            // '+', '-' or a digit
            if (A[i + 1] != '+' && A[i + 1] != '-'
                && (A[i + 1] >= '0' && A[i] <= '9'))
                return 0;
        }
    }

    /* If the string skips all above cases, then
    it is numeric*/
    return 1;
}
// int Isdigit(char n)
// {

//     if(n-'0'>=0 && n-'0'<=9)
//      return 1;
//      return 0;
// }

// int Solution::isNumber(const string A)
// {
//     int f=1;
//     int E=0,minus=0,C=0;
//     int chk=1;

//     if(A.length()==0)
//     return 0;
    //int idx=0,jdx=0;
    //  while (idx < A.length() && A[idx] == ' ')
    //     idx++;
    // while (j >= 0 && A[jdx] == ' ')
    //     jdx--;

//     if(A.length()==1)
//     {
//         if(A[0]-'0'>=0 && A[0]-'0'<=9)
//           return 1;

//           return 0;
//     }

//     for(int i=idx;i<A.length();i++)
//     {
//         if( !(Isdigit(A[i])) )
//         {
//             if(A[i]!='e' && A[i]!='.' && A[i]!='-' && A[i] != '+' )
//             {
//                 f=0;
//                 break;
//             }
//         }

//       if(A[i]=='e')
//       {
//           int ch=1;
//           E++;

//           if(E>1)
//           {
//               f=0;
//               break;
//           }

//           if(A[i+1]=='-')
//           {
//               if(!(Isdigit(A[i-1])))
//               {
//                   f=0;
//                   break;
//               }
//               ch=0;
//           }

//           if(!( Isdigit(A[i-1]) && Isdigit(A[i+1] ) )  && ch)
//           {
//               f=0;
//               break;
//           }

//       }

//       if(A[i]=='.')
//       {
//           C++;
//           chk=1;



//           if(i==A.length()-1)
//           {
//               f=0;
//               break;
//           }
//           if(C>1)
//           {   f=0;
//               break;
//           }

//           if(E!=0 )
//             {
//                 f=0;
//                 break;

//             }

//             if(i==0)
//             {
//                 if(!(Isdigit(A[i+1])))
//                 {
//                     f=0;
//                     break;
//                 }
//                 chk=0;
//             }

//           if(!(Isdigit(A[i-1]) && Isdigit(A[i+1])) && chk)
//           {
//               f=0;
//               break;
//           }


//       }

//         if(A[i]=='-')
//       {
//           minus++;

//           if(minus>2)
//             {
//                 f=0;
//                 break;

//             }

//           if(i!=0 && !(Isdigit(A[i+1]) ))
//           {
//               f=0;
//               break;
//           }

//           if(i!=0)
//           {
//               if(A[i-1]!='e')
//                 {
//                     f=0;
//                  break;
//                 }
//           }
//       }

//     }

//     return f;
// }

// int Solution::isNumber(const string A)
// {
//     int f=1;
//     int E=0,minus=0,C=0;

//     for(int i=0;i<A.length();i++)
//     {
//         if( !(isdigit(A[i])) )
//         {
//             if(A[i]!='e' && A[i]!='.' && A[i]!='-')
//             {
//                 f=0;
//                 break;
//             }
//         }

//       else if(A[i]=='e')
//       {
//           E++;

//           if(E>1)
//           {
//               f=0;
//               break;
//           }
//           else if(!( isdigit(A[i-1]) && isdigit(A[i+1] ) ) )
//           {
//               f=0;
//               break;
//           }

//       }

//       else if(A[i]=='.')
//       {
//           C++;

//           if(i==A.length()-1)
//           {
//               f=0;
//               break;
//           }
//           if(C>1)
//           {   f=0;
//               break;
//           }

//           if(E!=0)
//             {
//                 f=0;
//                 break;

//             }

//           if(!(isdigit(A[i-1]) && isdigit(A[i+1])))
//           {
//               f=0;
//               break;
//           }


//       }

//       else if(A[i]=='-')
//       {
//           minus++;

//           if(minus>2)
//             {
//                 f=0;
//                 break;

//             }

//           if(i!=0 || !(isdigit(A[i+1]) ))
//           {
//               f=0;
//               break;
//           }

//           if(i!=0)
//           {
//               if(A[i-1]!='e')
//                 {
//                     f=0;
//                  break;
//                 }
//           }
//       }

//     }

//     return f;
// }

int main()
{
    string str;
    cin>>str;

    cout<<isNumber(str);
    return 0;
}
