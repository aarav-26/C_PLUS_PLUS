/*
Kaprekar Number
Consider an n-digit number k. Square it and add the right n digits to the left
n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number.
For example, 9 is a Kaprekar number since 92 = 81 &amp; 8+1=9. and 297
is a Kaprekar number since 2972 = 88209 &amp; 88+209 = 297
*/
/*

#include<iostream>
using namespace std;

int main()
{
    int k,l,m,n,i,j,f,s;
    cin>>k;
    m=k;
    i=j=s=0;
    n=k*k;
    if(k==45)
    {
        cout<<"Kaprekar Number";
    }
    else
    {
        while(m>1)
        {
            m=m/10;
            i++;
        }
    }
    while(j<i)
    {
        f=n%10;
        s=s+f;
        n=n/10;
        j++;
    }
    l=s+n;
    if(l==k)
    {
        cout<<"Kaprekar Number";
    }
    else
    {
        cout<<"Not a Kaprekar Number";
    }

}
*/




#include<iostream>
using namespace std;
int main()
{
  int n,a,b;
  cin>>n;
  if(n>=1 && n<10)
  {
  a=(n*n)/10;
  b=(n*n)%10;
  }
  else if(n>=10 && n<100)
  {
  a=(n*n)/100;
  b=(n*n)%100;
  }
  else if(n>100 && n<1000)
  {
  a=(n*n)/1000;
  b=(n*n)%1000;
  }
  if(a+b==n)
    cout<<"Kaprekar Number";
    else
      cout<<"Not a Kaprekar Number";
}

