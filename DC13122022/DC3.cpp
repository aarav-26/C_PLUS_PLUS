/*
Anna University Grading System
The newly appointed Vice-Chancellor of Anna University wanted to create
an automated grading system for the students to check their grades. When
a student enters a mark, the grading system displays the corresponding
grade. Write a program to solve the given problem. The grades for marks
100 - S, 90-99 are A, 80-89 is B, 70-79 in C, 60-69 is D, 50-59 is E and less
than 50 is F.
*/
#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;

    if(m==100)
    {
      cout<<"S";
    }
    else if(m>=90&&m<=99)
    {
        cout<<"A";
    }
    else if(m>=80&&m<=89)
    {
        cout<<"B";
    }
    else if(m>=70&&m<=79)
    {
        cout<<"C";
    }
    else if(m>=60&&m<=69)
    {
        cout<<"D";
    }
    else if(m>=50&&m<=59)
    {
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    return 0;

}
