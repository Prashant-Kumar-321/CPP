#include<iostream>
using namespace std; 

class A
{
  int x,y,z; 

  public: 
      A ()  // DC 
      {
        cout<< "DCA(default constructor) called "<< endl; 
      } 

      // A(int a, int b, int c) // PC // taking three parameter 
      // {
      //   cout<< "PC called "<< endl; 
      //   x = a; 
      //   y = b; 
      //   z = c; 
      // }

      // A(int x, int y, int z) // if constructor's local variable name is same as instance variable of object  
      // {                      // Compiler cann't understand which one is local variable and which one is instance variable 
      //   x = x;               // so it will not intialize the object                
      //   y = y; 
      //   z = z; 
      // }

      A(int x, int y, int z)
      {
         cout<< "PC called "<< endl; 
         (*this).x = x;  //this->x = x;  // this[0].x = x; 
         (*this).y = y;  //this->y = y;  // this[0].y = y; 
         (*this).z = z;  //this->z = z;  // this[0].z = z; 
      }

      void display()
      {
        cout<<"x = "<< x<<" , y = "<< y<<" , z = "<< z<< endl; 
      }
}; 

// Driver code 
int main(void)
{
  A a(4,-2,2), b = A(19,-2,8); 

  a.display(); 
  b.display();

  return 0; 
}