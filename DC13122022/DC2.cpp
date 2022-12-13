/*
Hotel Tariff Calculator
Write a program to calculate the hotel tariff. The room rent is 20% high
during peak seasons [April, May, June, November, December]. Note: Use
the switch construct.
Valid Months : 1 to 12

*/
#include<iostream>
using namespace std;
int main()
{
    int nm,rent,ndays,tamt,per;
    cin>>nm>>rent>>ndays;

    tamt=rent*ndays;
    per=(20*tamt)/100;

    if(nm==1||nm==2||nm==3||nm==7||nm==8||nm==9||nm==10)
    {
        cout<<tamt;

    }
    else if(nm==4||nm==5||nm==6||nm==11||nm==12)
    {

        cout<<tamt+per;
    }
    return 0;

}
