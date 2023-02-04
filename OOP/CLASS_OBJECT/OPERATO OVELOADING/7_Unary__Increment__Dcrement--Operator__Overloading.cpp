#include<iostream>
#include<conio.h>
using namespace std; 

namespace unaryOpe
{
  class ABC 
  {
    private: 
       int x; // private Instance member variable of ABC class 
    public:
         ABC(int x)
         {
          this->x = x; 
         } 
         ABC(){x = 0;} // default constructor; 


         void display()
         {
          cout<< "x = "<< x<< endl; 
         }

         // Overloading unary INCREMENT OPERATOR
         // PRE-INCREMENT
         ABC operator++()
         {
           x++;

          return *this; // return invoked object(this is pointer pointing to invoked object) after increment its value 
         }

         //POST-INCREMENT
         ABC operator++(int)
         {
            ABC tem = *this; // storing invoked object temporary so that we can return this latter; 
            x++; 
            return tem; 
         }

         // Overloading unary DECREMENT OPERTOR
         //PRE-DECREMENT
         ABC operator--()
         {
          x--; 
          return *this; 
         }

         // POST DECREMENT
         ABC operator--(int)
         {
            ABC tem  = *this ; 

            x--; 

            return tem; 
         }

  }; 

}
using namespace unaryOpe; 

// Driver function 
int main()
{
  ABC a(30); 
  a.display(); 
   
   getch(); 

  ABC b = a++; 
  a.display();
  b.display();

  b = ++a; 
  a.display(); 
  b.display();   
  
   getch(); 
   cout<< " "<< endl; 
   b = a--; 
   a.display(); 
   b.display(); 

   getch(); 
   cout<< endl; 
   b = --a; 
   a.display(); 
   b.display(); 


  getch(); 
  return 0; 
}