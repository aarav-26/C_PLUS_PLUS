
/* Target Practice
Drona normally trains his disciples using a board that consists of
concentric circles. When the student correctly hits the center of the
concentric circles, his score is 100. The score gets reduced depending on
where the students hit on the board. When the student hits outside the
board, his score is 0. Drona will not allow a student to have his food unless
he scores 100. Arjuna will always hit the target in his frst attempt and he
will leave early. Others may take more turns to reach a score of 100. Can
you write a program to determine the number of turns a disciple takes to
reach the target score of 'n'?

#include<iostream>
using namespace std;
int main(void)
{
    int tar,scr,attempt=0,sum=0;
    cin>>tar;

    while(sum<tar)
    {
        cin>>scr;
        sum=sum+scr;
        attempt++;
    }
    cout<<"The number of turns is "<<attempt<<"\n";
}
*/

#include<iostream>
using namespace std;
int main()
{
  int target , temp , count = 0 , score = 0 ;
  cin >> target >> temp ;

  while ( 1 )
  {
    score = score + temp ;
    count++ ;
    if( score >= target )
      break ;
    cin >> temp ;
  }
  cout << "The number of turns is " << count ;
  return 0 ;
}
