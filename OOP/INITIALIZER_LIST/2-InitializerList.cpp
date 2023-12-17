#include<iostream>
using namespace std; 

class A
{
  int x,y,z; 
  const int P; // non-static data member 

  public: 
    A():P(0) 
    {
    } 
    A(int x, int y, int z) : x(x),y(y),z(z),/*const data member*/ P(x)// initializing object using initializer list 
    {
      cout<< "PC called "<< endl;
    }

    void display()
    {
      cout<< "x = "<< x<< " , y = "<< y<< " ,z = "<< z<< " , p = "<< P<<endl; 
    }

}; 

// Driver code 
int main(void)
{
  A a(3,8,10), b = A(8,-2,7); 

  a.display();
  b.display(); 
  
  return 0; 
} 