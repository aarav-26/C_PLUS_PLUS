/*
Write a program to swap two given numbers without using temporary
variables.
*/

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Before swapping"<<endl;
    cout<<"a = "<<x;
    cout<<" b = "<<y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<endl<<"After swapping"<<endl;
    cout<<"a = "<<x;
    cout<<" b = "<<y;
    return 0;
}
