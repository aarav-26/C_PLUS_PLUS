/*
Proft or loss
A fruit seller buys a dozen of bananas at Rs.X. He sells 1 banana at Rs.Y.
Write a program to determine the proft or loss in Rs. for the fruit seller.
*/
#include<iostream>
using namespace std;
int main()
{
    float x,y,selling,pro,loss;
    cin>>x>>y;
    selling=y*12;
    pro=selling-x;
    loss=x-selling;

    if(pro>0)
    {
        cout<<"Profit : Rs."<<pro;

    }
    else
    {
        cout<<"Loss : Rs."<<loss;

    }
    return 0;

}
