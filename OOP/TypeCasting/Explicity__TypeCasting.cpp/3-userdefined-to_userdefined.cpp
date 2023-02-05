#include <iostream>
#include <conio.h>

using namespace std;

// Don't Distrube first Class 
// Every thing will be done in the second class 
// whatever to be done 

class Dollar 
{
  int d;

public:
  Dollar() {}
  Dollar(int a) : d(a)
  {
  }

  void display()
  {
    cout<< "usd = "<< d << endl; ; 
  }
  int getD()
  {
    return d; 
  }
};

/**************************************************************/
class Rupee
{
  int r;

public:
  Rupee() {}
  Rupee(int a) : r(a)
  {
  }
  
  void display()
  {
    cout<< "rs  = "<< r << endl; ; 
  }

  // Type casting
  //1. source ---> class ---> operator dest_Data-type() 
  // operator overloading 
  operator Dollar()
  {
    return r; // return (int) --> Dollar(int) --> dollary temp object ---> by whihc object will be intialized )
  }

  // Constructor overloading 
  // 2.Destination ---> class ---> Constructor(Dollar d){ }
  Rupee(Dollar d): r(d.getD())
  {
  }
};

// Driver code
int main()
{
  Rupee R1 = 10; 
  Dollar D1 = R1; // Initializing Dolalr object with the Rupee object  
   
  R1.display(); 
  D1.display(); 
  cout<< endl ;  

  Dollar D2 = 120; 
  Rupee R2 = D2; // Initializing Rupee object with Dollary  object  

  R2.display(); 
  D2.display(); 
  
  return 0;
}

/*
 Overload constrctor() and operator Data_type() in one class
which is Beneath; 

Rupee R = 10; 
Dollar D = R; 

Dollar D1 = 30; 
Rupeee R1 = D1; 
*/