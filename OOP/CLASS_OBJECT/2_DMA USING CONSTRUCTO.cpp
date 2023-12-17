#include<iostream>
#include<conio.h>

using namespace std;

// Class Creating
class Addition
{

public: // Access Modifier
  int x,y;

  // Member function
  int add()
  {
    return (x+y);
  }
  int Multi(); //Declaration

  // Constructor
  Addition(int a,int b)// Parameterized constructor
  {
    x = a;
    y = b;
  }

  Addition() // without parameter constructor;
  {
    x = 5;
    y = 10;
  }
};

// definition of member function
int Addition :: Multi()
{
  return (x*y);
}

/* Driver code*/
int main()
{
  // DMA using constructor
  Addition*const p = new Addition(3,4);
  Addition *q = new Addition;// Default constructor

  int sum = p -> add();
  sum = (*p).add();

  // Accessing Member of object with the help of arrow Operator (->) with pointer
  cout<< "Addition of "<< p->x << " and " << p->y << " is "<< sum << endl ;
  cout<< "Addition of "<<(*p).x << " and " << (*p).y << " is "<< sum << endl; //(*P)---> object name equivalent

  // taking input
  cout<< "Enter two Number "<< endl;
  cin>>p[0].x>> p[0].y;
  cout<< "Addition of "<<p[0].x << " and " << p[0].y << " is "<< p[0].add() << endl;

  cout<< "Addition of "<<q[0].x << " and " << q[0].y << " is "<< q[0].add() << endl;
  cout<<"\nMultiplication = "<<  q->Multi() << endl ;


 // freeing the Allocated memory
 delete p;
 delete q;

  return 0;
}








