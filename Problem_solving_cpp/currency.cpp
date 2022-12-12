/*
Pranav, an enthusiastic kid visited the "Fun Fair 2017" along with his family.
His father wanted him to purchase entry tickets from the counter for his
family members. Being a little kid, he is just learning to understand units of
money. Pranav has paid some amount of money for the tickets but he
wants your help to give him back the change of Rs. N using the minimum
number of rupee notes.
Consider a currency system in which there are notes of seven
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If the
change is given to Pranav Rs. N is input, write a program to computer
smallest number of notes that will combine to give Rs. N.
*/


#include<iostream>
using namespace std;
int main()
{
    int amt,a,b,c,d,e,f,g,h,i,j,k,l,tot;
    cin>>amt;
    a=amt/100;
    b=amt%100;
    c=b/50;
    d=b%50;
    e=d/10;
    f=d%10;
    g=f/5;
    h=f%5;
    i=h/2;
    j=h%2;
    k=j/1;
    l=j%1;
    tot=a+c+e+g+i+k;
    cout<<tot;
    return 0;
}

