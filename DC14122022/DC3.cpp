/*
SPECIAL NUMBER
Write a program to fnd all special numbers between given range m and
n(both inclusive). Assume that m and n are 2-digit numbers.
A 2-digit number is said to be a special number if the sum of its digits and
the products of its digits is equal to the number itself.
For example, 19 is a special number.
The digits in 19 are 1 and 9. The sum of the digits is 10 and the product of
the digits is 9.
10+9 = 19.
*/


/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=9;
    while(i<=b)
    {
        if(i>=a) {
            cout<<i<<endl;
        }
        i+=10;
    }
}
*/


using namespace std;
int main()
{
  int m,n,a,b;
  cin>>m>>n;
  for(;m<=n;m++)
  {
    a=m/10;
    b=m%10;
    if(((a+b)+(a*b))==m)
    {
    cout<<m<<endl;
    }
  }
}

