/*
The misers discount
Mrs.Bhulbhul is a miser to the core. She saves money even on petite
things. One day she heard a discount offer announced in a mall. She wants
to purchase a lot of items to save her money. The discount is given only
when at least two items are bought. Since each item has different discount
prices, she fnds it diffcult to check the amount she has saved. So she
approaches you to device an automated discount calculator to make her
easy while billing.
*/

#include<iostream>
using namespace std;
int main()
{
    float it1,it2,dis,sum,disbal,ams;
    cin>>it1>>it2>>dis;
    sum=it1+it2;
    ams=(dis/100)*sum;
    disbal=sum-ams;

    cout<<sum<<endl;
    cout<<disbal<<endl;
    cout<<ams<<endl;


    return 0;

}
