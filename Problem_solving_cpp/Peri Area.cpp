/*
Cricket Stadium
There was a large ground in the center of the city which is rectangular in
shape. The Corporation decides to build a Cricket stadium in the area for
school and college students, But the area was used as a car parking zone.
In order to protect the land from using as an unauthorized parking zone,
the corporation wanted to protect the stadium by building a fence. In order
to help the workers to build a fence, they planned to place a thick rope
around the ground. They wanted to buy only the exact length of the rope
that is needed. They also wanted to cover the entire ground with a carpet
during the rainy season. They wanted to buy only the exact quantity of
carpet that is needed. They requested your help. Can you please help them
by writing a program to fnd the exact length of the rope and the exact
quantity of carpet that is required?
*/


#include<iostream>
using namespace std;
int main()
{
    int l,b,peri,area;
    cin>>l>>b;
    peri=2*(l+b);
    area=l*b;
    cout<<peri<<endl;
    cout<<area<<endl;
    return 0;
}
