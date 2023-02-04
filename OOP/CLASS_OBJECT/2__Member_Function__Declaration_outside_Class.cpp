#include<conio.h>

#include<iostream>

using namespace std;

// Class Declaration
class Arith__Oper
{
  // Access Modifier
public:
  int x,y;

  // member Function declaration
  int add();

  int sub();

  int multi();

  int Div();

  //constructor;
  Arith__Oper() //Modified Default Construnctor;
  {
    x = 0;
    y = 1;
  }

};

// Definition of Member Function of " Arith_oper "  class
// Outside the Class;
int Arith__Oper :: add()
{
  return x+y;
}

int Arith__Oper :: sub()
{
  return (x-y);
}

int Arith__Oper :: multi()
{
  return (x*y);
}

int Arith__Oper :: Div()
{
  if(y == 0)
  {
    cout<< "Infinite" <<endl;
    return 0;
  }

  return (x/y);
}


// Driver Code
int main()
{
  Arith__Oper c1 = Arith__Oper();
  //Creating an Arith__Oper class's Object
  // with the hlep of default constructor;

  cout<< "Enter two number : " << endl;
  cin >> c1.x >> c1.y;

  cout<< "Addition of " << c1.x << " and " << c1.y << " = " << c1.add()<<endl;
  cout<< "substraction of " << c1.x << " and " << c1.y << " = " << c1.sub()<<endl;
  cout<< "Multiplication of " << c1.x << " " << c1.y << " = " << c1.multi()<<endl;
  cout<< "Division of " << c1.x << " and " << c1.y << " = " << c1.Div()<<endl;

  cout<< "\a";
  getch();
  return 0;
}





















