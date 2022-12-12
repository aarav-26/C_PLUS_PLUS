/*
Sports day Celebration
Training for sports day has begun and the physical education teacher has
decided to conduct some team games. The teacher wants to split the
students in higher secondary into equal-sized teams. In some cases, there
may be some students who are left out from the teams and he wanted to
use the left out, students, to assist him in conducting the team games. For
instance, if there are 50 students in a class and if the class has to be
divided into 7 equal-sized teams, 7 students will be there in each team and
1 student will be left out. That 1 student will assist the PET. With this idea
in mind, the PET wants your help to automate this team splitting task. Can
you please help him out?
*/


#include<iostream>
using namespace std;
int main()
{
 int a,b,tm,tb;
 cin>>a>>b;
 tm=a/b;
 tb=a%b;
 cout<<tm<<endl;
 cout<<tb<<endl;
 return 0;

}
