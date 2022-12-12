/*
The newspaper Agency
Each Sunday, a newspaper agency sells w copies of a special edition
newspaper for Rs.x per copy. The cost to the agency of each newspaper is
Rs.y. The agency pays a fxed cost for storage, delivery, and so on of
Rs.100 per Sunday. The newspaper agency wants to calculate the proft
which it obtains only on Sundays. Can you please help them out by writing
a program to compute the proft if w, x, and y are given?
*/

#include<iostream>
using namespace std;
int main()
{
    int tn,stn,ctn,tpn,in,profit;
    cin>>tn>>stn>>ctn;
    tpn=tn*stn;
    in=(tn*ctn)+100;
    profit=tpn-in;
    cout<<profit;

    return 0;
}
