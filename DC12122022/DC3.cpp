/*
HillTown Inn is planning to organize a Food Festival bringing together at
one place, a wide variety of cuisines from across the world on account of
Christmas. The Hotel Management has rented out a square hall of an
indoor Auditorium for this extravaganza. The side of the square hall is y
inches in which a large square table is placed for the display of the most
popular and celebrated food items. The side of the square table is x
inches, such that x<y.
The Management wanted to fll the remaining floor area with a decorative
carpet. To get this done, they needed to know the floor area to be flled
with the carpet. Write a program to help the Management fnd the area of
the region located outside the square table, but inside the square hall.

*/

#include<iostream>
using namespace std;
int main()
{
 int y,x,area,carpet,bal;
 cin>>y>>x;
 area=y*y;
 carpet=x*x;
 bal=area-carpet;

 cout<<bal;
 return 0;

}
