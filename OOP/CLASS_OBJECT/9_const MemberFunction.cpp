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
    cout<< "const Member function is called "<< endl; 
    return (x+y);
  }

  int Add()  //Member function
  {
    cout<< "Member function is called "<< endl; 
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
   const int x = 10; // it can be initialized only at the time of declaration 
   //x = 5;  x is read-only variable ; ERROR!::!

   Addition a(7);
   int sum = a.Add(); 
   cout<< "Addition is "<<sum<< endl;

  const Addition b(4,5); // constant object of Addition class (data type)
  sum = b.Add(); 
  cout<< "Addition is "<< sum<< endl;

  getch();
  return 0;
}

