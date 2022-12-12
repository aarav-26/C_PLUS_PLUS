/*
Write a program that will get the input of the event details like the name of
the event, type of the event, number of people expected, a string value (Y/
N) telling whether the event is going to be a paid entry, and the projected
expenses (in lakhs) for the event. The program should then display the
input values as formatted output

*/


#include<iostream>
using namespace std;

int main()
{
    string a,b;
    int c;
    char d;
    double e;
    getline(cin,a);
    cin>>b>>c>>d>>e;
    cout<<"Event Name :"<<a<<endl;
    cout<<"Event Type :"<<b<<endl;
    cout<<"Expected Count :"<<c<<endl;
    cout<<"Paid Entry :"<<d<<endl;
    cout<<"Projected Expense :"<<e<<"L";

    return 0;
}
