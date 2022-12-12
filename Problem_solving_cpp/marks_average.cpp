/*
Average Calculation
A teacher wants to compute the average of 5 students in her class. Write a
program to help her to fnd the average. The average is the sum of all the
numbers, then divided by the total numbers.
*/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,avg;
    cin>>a>>b>>c>>d>>e;
    avg=(a+b+c+d+e)/5;
    cout<<fixed<<setprecision(2);
    cout<<avg;

    return 0;

}
