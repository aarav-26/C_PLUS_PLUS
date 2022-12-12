/*
Area of an equilateral triangle:
Ragu's grandparents have their land in an equilateral triangle shape. They
have to sow apple seeds for cultivation. Calculate the total area of the land
so that they can buy the required amount of seeds. Round off the area to
two decimal places.
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    float s,area;
    cin>>s;
    area=s*(1.732/4)*s;
    cout<<fixed<<setprecision(2);
    cout<<area;
    return 0;

}
