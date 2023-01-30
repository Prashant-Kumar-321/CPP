#include<iostream>
#include<conio.h>
using namespace std; 

class Addition 
{
  private: 
     static unsigned short count; 
            int x{0}, y{0}; // default value of x = 0 and y = 0; 
            int sum {0};

  public:
  // constructor 
  Addition(int a, int b)
  {
    count++; 
    x = a; 
    y = b; 
  } 
  Addition() // default constructor
  {
    count++; 
    x = 0; 
    y = 0; 
  }

  // static Member function (only access static variable)
  static unsigned short objectCount()
  {
    return count; 
  }
  // getter sum 
  int getSum()
  {
    return sum; 
  }

  int add()
  {
    sum = x+y; 
    return sum ; 
  }

  void display()
  {
    cout<< "num1 = "<< x<< " num2 = "<< y<< endl; 
  }


}; 

unsigned short Addition::count = 0; // Initialization of static variable of class 

// Driver code 
int main()
{
  Addition a(20,30), b(10,20), c; 

  a.display(); 
  a.add(); 
  cout<< "sum = "<<a.getSum()<< endl;

  b.add(); 
  cout<< "sum = "<< b.getSum()<< endl;  

  cout<< "Total number of object Created of Addition class = "<< Addition::objectCount()<< endl; 

  getch(); 
  return 0; ;
}