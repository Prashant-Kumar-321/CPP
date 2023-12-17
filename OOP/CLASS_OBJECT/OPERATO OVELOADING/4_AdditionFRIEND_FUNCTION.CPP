#include<iostream>
#include<conio.h>

using namespace std;

class Addition
{
  int x,y;

public:
  Addition(int a, int b)
  {
    x = a;
    y = b;
  }
  Addition () {}
  
  // Member function definition
  void display()
  {
    cout<< "x = "<< x<< " y = "<< y<< endl;
  }

  friend Addition add (Addition , Addition ); // friend function declaration
  friend void read (Addition&);

};

// definition fo friend function
Addition add(Addition a, Addition b)
{
  Addition tem;

  tem.x = a.x + b.x;
  tem.y = a.y + b.y;

  return tem;
}

void read(Addition &a)
{
  cout<< "Enter value of x ";
  cin>> a.x;
  cout<< "value of y = ";
  cin>> a.y;
}

// Driver code
int main()
{
  Addition a(3,5), b(8,10),c;

  cout<< "Enter value first point \n";
  read(a);
  cout<< "Enter value of second point \n";
  read(b);
  c = add(a,b);

  a.display();
  b.display();
  c.display();

  getch();
  return 0;
}















