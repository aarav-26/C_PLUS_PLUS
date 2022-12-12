/*
Area Calculation
Sheela has three things in her bag. She wants to compute the area of 3
things but 3 things are in different shapes. The three things are a square
shape, rectangular shape, and circular shape respectively. Write a program
to help Sheela to calculate the area of different shapes.
*/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,sq,req;
    float d,cir;
    cin>>a>>b>>c>>d;
    sq=a*a;
    req=b*c;
    cir=3.14*d*d;
    cout<<sq<<endl;
    cout<<req<<endl;
    cout<<fixed<<setprecision(2);
    cout<<cir<<endl;

    return 0;
}

