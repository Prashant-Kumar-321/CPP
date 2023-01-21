#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

class Addition
{
public:
  int x,y;

  int add()
  {
    return (x+y);
  }

  // constructor overloading is making multiple constructor with different parameter
  // construtor
  Addition() // default constructor
  {
    x = 5;
    y = 10;
  }

  Addition(int a) // one parameter construtor
  {
    x = y = a;
  }

  Addition(int a,int b) // two parameter constructor
  {
    x = a;
    y = b;
  }


};

int main()
{
  cout<< "\n\n"<<setw(80)<< "Constructor over loadding \n\n\n\n"<< endl ;

  Addition a,a1,a2,a3;
  Addition b = 5,b1(10),b2(15);
//  Addition c(2,3), c1(5,1);
  Addition c = Addition(2,3), c1(5,1);

  cout<< "sizeof Class \"Addition\" = "<< sizeof(Addition) << endl;



  _getch();
  return 0;
}
