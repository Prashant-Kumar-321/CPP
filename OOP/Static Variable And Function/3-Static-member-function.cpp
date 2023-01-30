#include<iostream>
#include<conio.h>
using namespace std; 

class ABC
{
  private:
      static int a; 
      static char ch; 
             int b{1}; // default value ===> 1; 
  public:    
      // constructor
      ABC (int b)
      {
        this->b = b; 
      }
      ABC(){ }
      // constructor end
     
     static void display() // static member function ; 
     {
      cout<< "a = "<< a<< endl; // It can only accesss static variables(classs variable)
      cout<< "ch(Ascii code) = "<< int(ch)<< endl; 
     }

}; 
int ABC::a = 10;
char ABC::ch = 'P';  

// Driver code 
int main(void)
{
  // Accessing static function without making any object 
  ABC::display(); 
  ABC A(20), B; 

  A.display();  // Accesing static function with object 
  B.display(); 

  getch(); 
  return 0; 
}