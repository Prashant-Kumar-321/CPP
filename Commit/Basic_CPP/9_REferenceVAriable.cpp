#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  int x,y;
  x = 10;
  y = 20;

  int &r = x;
  cout<< "x = "<< r<< endl;

  //&r = y;error: lvalue required for assignment operator as left operand
  cout<< "Condition = "<< (r == y) << endl ;

  return 0;
}
