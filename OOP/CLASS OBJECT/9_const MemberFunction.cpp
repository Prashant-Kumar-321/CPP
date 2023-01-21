#include<iostream>
#include<conio.h>

using namespace std;

class Addition
{
  int x,y;

public:

  // Member function
  int Add()const // Const Member function
  {
    return (x+y);
  }

  Addition(int a = 0) // constructor
  {
    x = a;
    y = a;
  }

  Addition(int a, int b)
  {
    x = a;
    y = b;
  }

};

/* Driver Code*/
int main()
{
   const int x = 10;
   //x = 5;

   Addition a(7);
   cout<< "Addition is "<< a.Add()<< endl;

  const Addition b(4,5); // constant object of Addition class (data type)
  cout<< "Addition is "<< b.Add()<< endl;

  getch();
  return 0;
}

