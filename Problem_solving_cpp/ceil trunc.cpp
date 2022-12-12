//C MATH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin>>a;

    cout<<floor(a)<<endl;//no work in positive value but if negative it round offs
    cout<<ceil(a)<<endl;//round off high value either it be less than .5
    cout<<trunc(a)<<endl;//no decimal works in neither positive and negative
    cout<<round(a)<<endl;//it round offs the number by decimal
    cout<<sqrt(a)<<endl;//to find the root value
    cout<<fixed<<setprecision(5)<<a<<endl;//for decimal points



    //float holds 7 decimals points
    //double holds 15 decimal points

    return 0;

}
