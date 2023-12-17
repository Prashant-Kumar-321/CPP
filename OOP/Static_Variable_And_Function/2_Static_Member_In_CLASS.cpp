#include<iostream>
#include<conio.h>
using namespace std; 

class A 
{
 public: // Access  Modifier 
    static int x ; // class Variable it is Associated with class not object 
    int y{0}; // default value of y is 0; 

    A(int y) //parametrized constructor 
    {
      this -> y = y;  // this is a pointer point the current object ; 
    }
    A(){ } // default constructor

    void display() // Non-static Member method to display value of x; 
    {
      cout<< "x = "<< x<< ",y = "<<y << endl; 
    } 
}; 
int A::x = 10; //intialize Static member variable of class(Very vital)

//Driver function
int main(void)
{
 int& p = A::x; // Accessing static instance member variable with the help to class even without creating object of that class; 

  A  a(20), b; // constructor will be called to create object 

  a.display();
  b.display();

  a.x = 30;  // Accessing class variable with object 
  b.x = 40; 
  p = 50; 

  cout<< "a.x = "<< a.x<<" "<< A::x<< endl; 
  cout<< "a.y = "<< b.x<<" "<< A::x<< endl;  

  cout<< "x = "<< p<< endl;  
  
  return 0; 
}