/*
Calculating Gain Percentage
Vikram buys an old scooter for Rs. A and spends Rs. B on its repairs. If he
sells the scooter for Rs. C, what is his gain %?

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
 float a,b,c,p,d,per;
 cin>>a>>b>>c;
 p=a+b;
 d=c-p;//proft amount
 per=d*100/p;
 cout<<fxed<<setprecision(2)<<per;
 return 0; }

