#include<iostream>
#include<conio.h>
using namespace std; 

class A
{
  private: 
    int a ;

  public:
     int b; 

     A(int a, int b)
     {
      this->a = a; 
      this->b = b; 
     }
     A() {}

     void display() // Member fucntion of class A 
     {
      cout<< "a = "<< a<< " b = "<< b << endl; 
     }
     void setA(int a)
     {
      this->a = a; 
     }

}; 

// child class
// Derived Class  
class B : public A
{
  /*
    * int A::a is private member 
    * So it is Inaccessible in the Derived class 
  */
 /*
  *  int A::b is public member 
  * so it is Accessible in the Drived Class 
 */
  private: 
    int c;  // private->private a
  public: 
    int d;  // b, display(); 

    B(int p, int q, int r, int s)
    {
      setA(p); // private-->private 'a' (instance variable) will be initialized by first argument 
      b = q; 
      c = r; 
      d = s; 
    }

    void show()
    {
      cout<< "b = "<< b<< "c = "<< c<< " d = "<< d<< endl; 
    }
}; 

/** Note:-
 * Members of Base (Parent) Class
 * 1. 
 * Public and Protected Members are Accessible 
 * in the Derived Class 
 * 
 * 2. 
 * Private Members are Not Accesseible
 * in the Drived Class 
*/

// Driver code 
int main()
{ 
  B a(2,3,5,9); 

  a.display(); 
 
  getch(); 
  return 0; 
}