/*
Write a program to generate the equivalent ASCII value for a given
character.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    cout<<int(ch);//American standard code for information interchange=ASCII
    return 0;
}

/*
    65-90    A-Z
    97-122   a-z
    48- 57   0-9
    22       space

*/
