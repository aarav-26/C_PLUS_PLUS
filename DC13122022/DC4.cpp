/*
Kalyani Jewellers has planned to build a new showroom in Coimbatore
city. They have selected the area to build the showroom and it is in a
triangle shape. Ravi, a civil engineer from VIP construction is the in-charge
of this project. Ragavan, founder of VIP construction asked Ravi to fnd the
exact shape of the selected area. Help Ravi to fnd the exact triangle shape.
Equilateral Triangle - If all sides are equal
Isosceles Triangle - If any two sides are equal
Scalene Triangle - No sides are equal
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b&&b==c&&c==a)
    {
        cout<<"Equilateral Triangle";
    }
    else if(a==b||b==c||c==a)
    {
        cout<<"Isosceles Triangle";
    }
    else
    {

        cout<<"Scalene Triangle";
    }
    return 0;
}
