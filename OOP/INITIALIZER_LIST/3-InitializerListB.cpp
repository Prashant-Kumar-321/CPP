#include<iostream>
using namespace std; 

// Global variable 
int global = 20; // it will become shared memory for all object ABC 
                 // whom z will be pointing 

class ABC
{
    int x,y; 
    int &z;  
    // int &z = 10 // Error; 

    public: 
        ABC() : z(global)
        {}
        ABC(int a, int b): z(global) //intialization of reference variable
        {
          x = a; 
          y = b; 
        }

        void display()
        {
          cout<< "x = "<< x<< " , y = "<< y<< " , z = "<< z<< endl; 
        }

}; 

// deriver code 
int main(void)
{ 
  // const int &z = 10; 
  cout<< "a ==> "<< endl;//Here z is acting like an shared variable for the object 
  ABC a(9,2);
  a.display();

  cout<< "b==>"<< endl; 
  ABC b(10,4);  
  b.display(); 

  return 0; 
}