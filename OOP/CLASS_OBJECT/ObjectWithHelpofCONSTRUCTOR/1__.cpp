#include<iostream>
#include<conio.h>

using namespace std;

// creating class
class Addition
{
public:
  int x, y;

  // memeber function
  int add()
  {
    return (x+y);
  }

  // contstructor;
  // 1.default constructor
  Addition ()
  {
    x = 2;
    y = 8;
  }

  //2.taking two argument
  Addition(int a, int b)
  {
    x = a;
    y = b;
  }

  // 3. taking one argument
  Addition(int a)
  {
    x = a;
    y = 5;
  }

};

int main()
{
  int x,y;
  cout<< "Enter two number: ";
  cin>> x >> y;
  int age = 10; 
  // Making object of Addition class;

Addition A = Addition();// Explicitly calling [default constructor] to make object;
Addition B;             // Implicitly calling [default constructor] to make object;

//Addition C(15);         // Implicit calling of constructor Addition(int a) to make an object;
Addition C = Addition(45);// Explicit calling of constructor Addition(int a) to make an object;
Addition p1(x,y);         // Implicit calling of constructor Addition(int a,int b);

  cout<< "Object has been built and it is ready to user \n\n";

  cout<< "Add = (" <<A.x << ", "<<A.y<< ") = " << A.add() << endl ;
  cout<< "Add = (" <<C.x << ", "<<C.y<< ") = " << C.add() << endl ;
  cout<< "Add = (" <<p1.x << ", "<<p1.y<< ") = " << p1.add() << endl ;

  return 0;
}
